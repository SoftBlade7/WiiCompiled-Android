#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F5F54(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F5F54;

loc_801F5F54:
{
    r0 = (r4 + 65536);
    r6 = MemoryInline::FlatRead32((r3 + 5600));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_801F5F60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F5F6C;
    }
}

loc_801F5F64:
{
    r7 = 0;
    goto loc_801F5FD0;
}

loc_801F5F6C:
{
    r7 = r6;
}

loc_801F5F70:
{
    r0 = MemoryInline::FlatRead16(r7);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F5F78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F5F84;
    }
}

loc_801F5F7C:
{
    r7 = 0;
    goto loc_801F5FD0;
}

loc_801F5F84:
{
    r8 = MemoryInline::FlatRead32((r7 + 24));
}

loc_801F5F8C:
{
    if ((static_cast<uint32_t>(r8) > static_cast<uint32_t>(r4))) {
        goto loc_801F5FC0;
    }
}

loc_801F5F90:
{
    r0 = MemoryInline::FlatRead32((r7 + 20));
    r5 = (r8 + r0);
    r0 = (r5 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_801F5FA0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801F5FC0;
    }
}

loc_801F5FA4:
{
    r0 = MemoryInline::FlatRead8((r3 + 32));
    r3 = (r4 - r8);
    r4 = MemoryInline::FlatRead32((r7 + 4));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r7 + 8), r0);
    goto loc_801F5FD0;
}

loc_801F5FC0:
{
    r7 = MemoryInline::FlatRead32((r7 + 32));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r6));
}

loc_801F5FC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F5F70;
    }
}

loc_801F5FCC:
{
    r7 = 0;
}

loc_801F5FD0:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F5F54 func_801F5F54 preserves=true fpr_mask=0x00000000
