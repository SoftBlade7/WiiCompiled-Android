#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FCE78(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_801FCE78;

loc_801FCE78:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FCE84:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    r3 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r5;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FCEB0;
    }
}

loc_801FCEA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801FCEAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FCEB8;
    }
}

loc_801FCEB0:
{
    r3 = 10;
    goto loc_801FCF8C;
}

loc_801FCEB8:
{
    r6 = MemoryInline::FlatRead32((r4 + 44));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
}

loc_801FCEC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FCECC;
    }
}

loc_801FCEC4:
{
    r3 = 10;
    goto loc_801FCF8C;
}

loc_801FCECC:
{
    r0 = MemoryInline::FlatRead32((r4 + 28));
}

loc_801FCED4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801FCEF8;
    }
}

loc_801FCED8:
{
    r0 = MemoryInline::FlatRead32((r4 + 48));
}

loc_801FCEE0:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_801FCEF8;
    }
}

loc_801FCEE4:
{
    r29 = (r5 + -1);
}

loc_801FCEEC:
{
    if ((static_cast<uint32_t>(r29) >= static_cast<uint32_t>(r6))) {
        goto loc_801FCF74;
    }
}

loc_801FCEF0:
{
    r3 = 34;
    goto loc_801FCF74;
}

loc_801FCEF8:
{
    r0 = MemoryInline::FlatRead32((r4 + 48));
    r6 = MemoryInline::FlatRead8((r4 + 6));
    r7 = (r5 - r0);
    r0 = (r6 + -1);
    r0 = (r0 & r7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FCF70;
    }
}

loc_801FCF10:
{
    r0 = MemoryInline::FlatRead8((r4 + 33));
    r3 = r31;
    r6 = (r1 + 8);
    r4 = PPC_Srw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
    r4 = (r4 + 2);
    r5 = r4;
    ctx->lr = 0x801FCF2Cu;
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
    InvokeDirectCpu<0x801FCCE0u>(ctx);
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
}

loc_801FCF30:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801FCF74;
    }
}

loc_801FCF34:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r4 + 65536);
}

loc_801FCF40:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_801FCF4C;
    }
}

loc_801FCF44:
{
    r29 = -1;
    goto loc_801FCF74;
}

loc_801FCF4C:
{
    r5 = (r4 + -2);
    r4 = MemoryInline::FlatRead8((r31 + 33));
    r6 = MemoryInline::FlatRead8((r31 + 6));
    r0 = MemoryInline::FlatRead32((r31 + 48));
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r0 = (r6 + r0);
    r29 = (r0 + r4);
    r29 = (r29 + -1);
    goto loc_801FCF74;
}

loc_801FCF70:
{
    r29 = (r5 + -1);
}

loc_801FCF74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FCF78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FCF84;
    }
}

loc_801FCF7C:
{
    MemoryInline::FlatWrite32(r30, r29);
    goto loc_801FCF8C;
}

loc_801FCF84:
{
    r0 = -1;
    MemoryInline::FlatWrite32(r30, r0);
}

loc_801FCF8C:
{
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
// RECOMP_REGISTRATION base 0x801FCE78 func_801FCE78 preserves=true fpr_mask=0x00000000
