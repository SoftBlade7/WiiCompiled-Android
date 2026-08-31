#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8067E0BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8067E0BC;

loc_8067E0BC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 24u, true, false);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 20));
    r6 = 0;
    r0 = -1;
    r8 = 0;
    r5 = 0;
    ctr = r7;
}

loc_8067E0D8:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_8067E110;
    }
}

loc_8067E0DC:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r4_addr_2 = (r4 + r8);
    r4 = MemoryInline::FlatRead8(r4_addr_2);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8067E104;
    }
}

loc_8067E0EC:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 12));
    r6 = (r6 + 1);
    r4_addr_3 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_3);
}

loc_8067E0FC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8067E104;
    }
}

loc_8067E100:
{
    r0 = r8;
}

loc_8067E104:
{
    r5 = (r5 + 4);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8067E0DC;
    }
}

loc_8067E110:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_8067E114:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8067E118:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8067E11C:
{
    r4 = 0;
    r5 = 0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8067E214;
    }
}

loc_8067E128:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 20));
    r7 = (r7 + -8);
}

loc_8067E134:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(8))) {
        goto loc_8067E1E8;
    }
}

loc_8067E138:
{
    r9 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 20));
    r8 = 0;
}

loc_8067E144:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(0))) {
        goto loc_8067E15C;
    }
}

loc_8067E148:
{
    r6 = 0x80000000u;
    r6 = (r6 + -2);
}

loc_8067E154:
{
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(r6))) {
        goto loc_8067E15C;
    }
}

loc_8067E158:
{
    r8 = 1;
}

loc_8067E15C:
{
}

loc_8067E160:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8067E1E8;
    }
}

loc_8067E164:
{
    r6 = (r7 + 7);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r6 = (r6_rot_1 & 536870911);
    ctr = r6;
}

loc_8067E174:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_8067E1E8;
    }
}

loc_8067E178:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r12 = (r6 + r5);
    r6_addr_2 = (r6 + r5);
    r6 = MemoryInline::FlatRead8(r6_addr_2);
    r7 = MemoryInline::FlatRead8((r12 + 1));
    r5 = (r5 + 8);
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r6 = MemoryInline::FlatRead8((r12 + 2));
    r10 = MemoryInline::FlatRead8((r12 + 3));
    r4 = (r4 + r8);
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r9 = MemoryInline::FlatRead8((r12 + 4));
    r4 = (r4 + r7);
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r8 = MemoryInline::FlatRead8((r12 + 5));
    r4 = (r4 + r11);
    r10 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
    r7 = MemoryInline::FlatRead8((r12 + 6));
    r6 = MemoryInline::FlatRead8((r12 + 7));
    r9 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    r4 = (r4 + r10);
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    r4 = (r4 + r9);
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r4 = (r4 + r8);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r4 = (r4 + r7);
    r4 = (r4 + r6);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8067E178;
    }
}

loc_8067E1E8:
{
    r7 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 20));
    r6 = (r7 - r5);
    ctr = r6;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r7));
}

loc_8067E1F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8067E214;
    }
}

loc_8067E1FC:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r6_addr_5 = (r6 + r5);
    r6 = MemoryInline::FlatRead8(r6_addr_5);
    r5 = (r5 + 1);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r4 = (r4 + r6);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8067E1FC;
    }
}

loc_8067E214:
{
    r6 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r3 + 16));
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r4 = (r6 - r4);
    r5_addr_0 = (r5 + r0);
    MemoryInline::FlatWrite8(r5_addr_0, static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 4));
    r3_addr_0 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_0, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8067E0BC func_8067E0BC preserves=true fpr_mask=0x00000000
