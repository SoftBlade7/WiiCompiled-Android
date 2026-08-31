#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065CEC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8065CEC0;

loc_8065CEC0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 8408));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r3));
}

loc_8065CEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065CF0C;
    }
}

loc_8065CEF8:
{
    r3 = MemoryInline::FlatRead32((r31 + 8408));
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r3));
}

loc_8065CF08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065CF2C;
    }
}

loc_8065CF0C:
{
    r3 = 0x809C0000u;
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    ctx->lr = 0x8065CF1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 4));
    goto loc_8065CF58;
}

loc_8065CF2C:
{
    r3 = 0x809C0000u;
    r4 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8065CF40:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065CF54;
    }
}

loc_8065CF44:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 20));
    goto loc_8065CF58;
}

loc_8065CF54:
{
    r0 = 0;
}

loc_8065CF58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8065CF5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065CF8C;
    }
}

loc_8065CF60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(7));
}

loc_8065CF64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065CF8C;
    }
}

loc_8065CF68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8065CF6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065CF94;
    }
}

loc_8065CF70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_8065CF74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065CF94;
    }
}

loc_8065CF78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8065CF7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065CF9C;
    }
}

loc_8065CF80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8065CF84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065CF9C;
    }
}

loc_8065CF88:
{
    goto loc_8065CFA4;
}

loc_8065CF8C:
{
    r3 = 1;
    goto loc_8065CFA8;
}

loc_8065CF94:
{
    r3 = 2;
    goto loc_8065CFA8;
}

loc_8065CF9C:
{
    r3 = 3;
    goto loc_8065CFA8;
}

loc_8065CFA4:
{
    r3 = 0;
}

loc_8065CFA8:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00001FB gpr_write=0xE00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8065CEC0 func_8065CEC0 preserves=true fpr_mask=0x00000000
