#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80515014(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80515014;

loc_80515014:
{
    r8 = MemoryInline::FlatRead16((r3 + 4));
    r10 = 0;
    goto loc_80515084;
}

loc_80515020:
{
    r0 = (r10 & 65535);
}

loc_80515028:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r8))) {
        goto loc_8051503C;
    }
}

loc_8051502C:
{
    r5 = MemoryInline::FlatRead32(r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r5_addr_2 = (r5 + r0);
    r6 = MemoryInline::FlatRead32(r5_addr_2);
    goto loc_80515040;
}

loc_8051503C:
{
    r6 = 0;
}

loc_80515040:
{
    r9 = MemoryInline::FlatRead32(r6);
    r7 = 0;
    r5 = MemoryInline::FlatRead8(r9);
}

loc_80515050:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r4))) {
        goto loc_80515070;
    }
}

loc_80515054:
{
    r0 = MemoryInline::FlatRead8((r9 + 1));
    r5 = (r5 + r0);
    r0 = (r5 + -1);
    r0 = (r0 & 255);
}

loc_80515068:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_80515070;
    }
}

loc_8051506C:
{
    r7 = 1;
}

loc_80515070:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80515074:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80515080;
    }
}

loc_80515078:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

loc_80515080:
{
    r10 = (r10 + 1);
}

loc_80515084:
{
    r0 = (r10 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r8));
}

loc_8051508C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80515020;
    }
}

loc_80515090:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80515014 func_80515014 preserves=true fpr_mask=0x00000000
