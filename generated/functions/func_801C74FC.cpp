#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801C74FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801C74FC;

loc_801C74FC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80350000u;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & 1020);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = (r5 + 2352);
    r0 = 2;
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r5_addr_0 = (r5 + r3);
    r31 = MemoryInline::FlatRead32(r5_addr_0);
    r5 = 0;
    r3 = MemoryInline::FlatRead8((r31 + 2248));
    r3 = (r3 * 96);
    r3 = (r31 + r3);
    r3 = (r3 + 160);
    ctr = r0;
}

loc_801C753C:
{
    r3_addr_2 = (r3 + r7);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r5));
    r6 = (r3 + r7);
    r7 = (r7 + 8);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 5), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 6), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 7), static_cast<uint8_t>(r5));
    r6 = (r3 + r7);
    r3_addr_3 = (r3 + r7);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r5));
    r7 = (r7 + 8);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 5), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 6), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 7), static_cast<uint8_t>(r5));
    r6 = (r3 + r7);
    r3_addr_4 = (r3 + r7);
    MemoryInline::FlatWrite8(r3_addr_4, static_cast<uint8_t>(r5));
    r7 = (r7 + 8);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 5), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 6), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 7), static_cast<uint8_t>(r5));
    r6 = (r3 + r7);
    r3_addr_5 = (r3 + r7);
    MemoryInline::FlatWrite8(r3_addr_5, static_cast<uint8_t>(r5));
    r7 = (r7 + 8);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 5), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 6), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 7), static_cast<uint8_t>(r5));
    r6 = (r3 + r7);
    r3_addr_6 = (r3 + r7);
    MemoryInline::FlatWrite8(r3_addr_6, static_cast<uint8_t>(r5));
    r7 = (r7 + 8);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 5), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 6), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 7), static_cast<uint8_t>(r5));
    r6 = (r3 + r7);
    r3_addr_7 = (r3 + r7);
    MemoryInline::FlatWrite8(r3_addr_7, static_cast<uint8_t>(r5));
    r7 = (r7 + 8);
    MemoryInline::FlatWrite8((r6 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 3), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 5), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 6), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r6 + 7), static_cast<uint8_t>(r5));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801C753C;
    }
}

loc_801C7630:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 1), 0, 5u, true, false);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_0 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r0 = (r0 & 40735);
}

loc_801C7640:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 2232));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801C764C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801C765C;
    }
}

loc_801C7650:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r0));
    goto loc_801C7664;
}

loc_801C765C:
{
    r0 = -4;
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r0));
}

loc_801C7664:
{
    r0 = MemoryInline::FlatRead8((r31 + 2241));
    MemoryInline::FlatWrite8((r3 + 40), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite32((r31 + 2120), r0);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 3));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & -4);
    r6 = MemoryInline::FlatRead16((r31 + 2164));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 3);
    r5 = (r5 & -4);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0 = (r5 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r6);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 2));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r6 = MemoryInline::FlatRead16((r31 + 2166));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_3 & 2);
    r5 = (r5 & -4);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r5 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r6);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 5));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 2));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r5 = MemoryInline::FlatRead16((r31 + 2168));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 2);
    r4 = (r4 & -4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r4 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r5);
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r31 + 2248));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_5 & 255);
    MemoryInline::FlatWrite8((r31 + 2248), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000003B gpr_write=0x800000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801C74FC func_801C74FC preserves=true fpr_mask=0x00000000
