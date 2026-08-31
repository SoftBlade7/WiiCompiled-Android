#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E2C24(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801E2C24;

loc_801E2C24:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead32((r3 + 204));
    r0 = (r0 & 16711680);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E2C4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E2C58;
    }
}

loc_801E2C50:
{
    r3 = 0;
    goto loc_801E2CE0;
}

loc_801E2C58:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E2C60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E2C6C;
    }
}

loc_801E2C64:
{
    r3 = -4;
    goto loc_801E2CE0;
}

loc_801E2C6C:
{
    r3 = (r1 + 8);
    ctx->lr = 0x801E2C74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DC2ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E2C78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E2C80;
    }
}

loc_801E2C7C:
{
    goto loc_801E2CE0;
}

loc_801E2C80:
{
    r0 = MemoryInline::FlatRead8((r31 + 200));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801E2C88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E2CAC;
    }
}

loc_801E2C8C:
{
    r4 = MemoryInline::FlatRead32((r31 + 136));
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r5 = MemoryInline::FlatRead32((r31 + 140));
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r4 ^ r0);
    r3 = (r5 ^ r3);
    r0 = (r3 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E2CB4;
    }
}

loc_801E2CAC:
{
    r3 = -3;
    goto loc_801E2CE0;
}

loc_801E2CB4:
{
    r0 = MemoryInline::FlatRead32((r31 + 204));
    r3 = r31;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 255);
    r4 = (r0 * 60);
    ctx->lr = 0x801E2CC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DE5D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E2CCC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E2CDC;
    }
}

loc_801E2CD0:
{
    r0 = MemoryInline::FlatRead32((r31 + 24));
    r0 = (r0 & -262145);
    MemoryInline::FlatWrite32((r31 + 24), r0);
}

loc_801E2CDC:
{
    r3 = 0;
}

loc_801E2CE0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801E2C24 func_801E2C24 preserves=true fpr_mask=0x00000000
