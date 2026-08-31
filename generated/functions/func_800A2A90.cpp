#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A2A90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800A2A90;

loc_800A2A90:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A2A98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800A2A9C:
{
    r9 = 0;
    r7 = 0;
    r6 = 0;
    goto loc_800A2AD4;
}

loc_800A2AB0:
{
    r8 = (r8 + r7);
    r0 = MemoryInline::FlatRead32((r8 + 4));
}

loc_800A2ABC:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_800A2ACC;
    }
}

loc_800A2AC0:
{
}

loc_800A2AC4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r5))) {
        goto loc_800A2ACC;
    }
}

loc_800A2AC8:
{
    MemoryInline::FlatWrite32((r8 + 4), r6);
}

loc_800A2ACC:
{
    r7 = (r7 + 8);
    r9 = (r9 + 1);
}

loc_800A2AD4:
{
    r8 = MemoryInline::FlatRead32((r3 + 20));
    r0 = MemoryInline::FlatRead32(r8);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r9), static_cast<uint32_t>(r0));
}

loc_800A2AE0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800A2AB0;
    }
}

loc_800A2AE4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003C1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800A2A90 func_800A2A90 preserves=true fpr_mask=0x00000000
