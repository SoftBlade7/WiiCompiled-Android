#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80538F60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80538F60;

loc_80538F60:
{
    r4 = 0x809C0000u;
    r7 = 2;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r8 = 0;
    r5 = MemoryInline::FlatRead8((r4 + 36));
    r6 = (r4 + 40);
    goto loc_80538FD8;
}

loc_80538F7C:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r4_addr_2 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    r0 = MemoryInline::FlatRead32((r4 + 56));
    r0 = (r0 & 16);
}

loc_80538F94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80538FD4;
    }
}

loc_80538F98:
{
}

loc_80538F9C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(2))) {
        goto loc_80538FB4;
    }
}

loc_80538FA0:
{
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r6 + r0);
    r7 = MemoryInline::FlatRead32((r4 + 204));
    goto loc_80538FD4;
}

loc_80538FB4:
{
    r0 = (r8 & 255);
    r0 = (r0 * 240);
    r4 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 204));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_80538FC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80538FD4;
    }
}

loc_80538FCC:
{
    r3 = 0;
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

loc_80538FD4:
{
    r8 = (r8 + 1);
}

loc_80538FD8:
{
    r0 = (r8 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_80538FE0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80538F7C;
    }
}

loc_80538FE4:
{
    r3 = 1;
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

// RECOMP_GUEST_ABI gpr_read=0x000001D9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80538F60 func_80538F60 preserves=true fpr_mask=0x00000000
