#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8086ABA8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;

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

    goto loc_8086ABA8;

loc_8086ABA8:
{
    r7 = MemoryInline::FlatRead16((r3 + 8));
    r10 = 0;
    goto loc_8086AC0C;
}

loc_8086ABB4:
{
    r0 = (r10 & 65535);
    r6 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 * 36);
    r8 = MemoryInline::FlatRead32((r3 + 4));
    r9 = (r6 + r0);
    r6_addr_2 = (r6 + r0);
    r6 = MemoryInline::FlatRead16(r6_addr_2);
    r0 = MemoryInline::FlatRead16((r9 + 2));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r6 = (r6_rot_2 & -32);
    r8_addr_2 = (r8 + r6);
    r6 = MemoryInline::FlatRead8(r8_addr_2);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & -32);
    r8_addr_3 = (r8 + r0);
    r0 = MemoryInline::FlatRead8(r8_addr_3);
}

loc_8086ABE4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r4))) {
        goto loc_8086ABF0;
    }
}

loc_8086ABE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r5));
}

loc_8086ABEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086AC00;
    }
}

loc_8086ABF0:
{
}

loc_8086ABF4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r5))) {
        goto loc_8086AC08;
    }
}

loc_8086ABF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_8086ABFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8086AC08;
    }
}

loc_8086AC00:
{
    r3 = r10;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

loc_8086AC08:
{
    r10 = (r10 + 1);
}

loc_8086AC0C:
{
    r0 = (r10 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
}

loc_8086AC14:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8086ABB4;
    }
}

loc_8086AC18:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000779 gpr_write=0x000007C9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8086ABA8 func_8086ABA8 preserves=true fpr_mask=0x00000000
