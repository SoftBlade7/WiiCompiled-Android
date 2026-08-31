#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80882BE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80882BE8;

loc_80882BE8:
{
    r0 = MemoryInline::FlatRead8((r3 + 17278));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80882BF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80882BF4:
{
    r7 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 7917));
    r6 = MemoryInline::FlatRead8((r7 + 7930));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_80882C04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80882C08:
{
    r0 = MemoryInline::FlatRead8((r7 + 8016));
    r7 = 0;
}

loc_80882C14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80882C38;
    }
}

loc_80882C18:
{
    r6 = 0x809C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r6 = MemoryInline::FlatRead32((r6 + -10448));
    r6 = MemoryInline::FlatRead32((r6 + 12));
    r6_addr_1 = (r6 + r0);
    r6 = MemoryInline::FlatRead32(r6_addr_1);
    r0 = MemoryInline::FlatRead32((r6 + 56));
    r0 = (r0 & 2);
}

loc_80882C34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80882C3C;
    }
}

loc_80882C38:
{
    r7 = 1;
}

loc_80882C3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80882C40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80882C44:
{
    r0 = (r5 * 28);
    r5 = MemoryInline::FlatRead8((r3 + 7916));
    r7 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r7 + 18));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_80882C58:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_80882C5C:
{
    r8 = MemoryInline::FlatRead8((r7 + 19));
}

loc_80882C64:
{
    if ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r5))) {
        goto loc_80882C80;
    }
}

loc_80882C68:
{
    r6 = (r3 + r4);
    r5 = (r3 + r8);
    r6 = MemoryInline::FlatRead8((r6 + 7942));
    r0 = MemoryInline::FlatRead8((r5 + 7942));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_80882C7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80882C80:
{
    MemoryInline::FlatWrite8((r7 + 19), static_cast<uint8_t>(r4));
    r4 = 1;
    r0 = MemoryInline::FlatRead8((r3 + 7916));
    MemoryInline::FlatWrite8((r3 + 8458), static_cast<uint8_t>(r4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
}

loc_80882C94:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_80882C98:
{
    r3 = 0x809C0000u;
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r0 = MemoryInline::FlatRead32((r5 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80882CB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80882CB4:
{
    r0 = MemoryInline::FlatRead16((r5 + 2974));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(8));
}

loc_80882CBC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80882CC0:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 8), r0);
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

loc_return:
{
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
// RECOMP_REGISTRATION base 0x80882BE8 func_80882BE8 preserves=true fpr_mask=0x00000000
