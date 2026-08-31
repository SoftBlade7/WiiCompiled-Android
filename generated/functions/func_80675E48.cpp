#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80675E48(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80675E48;

loc_80675E48:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x80380000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r3 = MemoryInline::FlatRead32((r5 + 24576));
    r0 = MemoryInline::FlatRead32((r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80675E78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80675EB0;
    }
}

loc_80675E7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80675E80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80675EC0;
    }
}

loc_80675E84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80675E88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80675ED0;
    }
}

loc_80675E8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80675E90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80675EE0;
    }
}

loc_80675E94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80675E98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80675EF0;
    }
}

loc_80675E9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80675EA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80675F00;
    }
}

loc_80675EA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_80675EA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80675F10;
    }
}

loc_80675EAC:
{
    goto loc_80675F20;
}

loc_80675EB0:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r31 = (r3 + 259);
    goto loc_80675F2C;
}

loc_80675EC0:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r31 = (r3 + 262);
    goto loc_80675F2C;
}

loc_80675ED0:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r31 = (r3 + 265);
    goto loc_80675F2C;
}

loc_80675EE0:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r31 = (r3 + 268);
    goto loc_80675F2C;
}

loc_80675EF0:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r31 = (r3 + 271);
    goto loc_80675F2C;
}

loc_80675F00:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r31 = (r3 + 274);
    goto loc_80675F2C;
}

loc_80675F10:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r31 = (r3 + 277);
    goto loc_80675F2C;
}

loc_80675F20:
{
    r3 = 0x808A0000u;
    r3 = (r3 + -21928);
    r31 = (r3 + 280);
}

loc_80675F2C:
{
    ctx->lr = 0x80675F30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80675454u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x808C0000u;
    r7 = r3;
    r5 = MemoryInline::FlatRead32((r4 + 3428));
    r3 = r29;
    r4 = r30;
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80675F50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80011938u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80675E48 func_80675E48 preserves=true fpr_mask=0x00000000
