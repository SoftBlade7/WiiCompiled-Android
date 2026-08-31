#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801C7F18(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r5_addr_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r6_addr_7 = 0;
    uint32_t r6_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801C7F18;

loc_801C7F18:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x80350000u;
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r6 = (r6_rot_0 & 1020);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = (r5 + 2352);
    r0 = 2;
    r8 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r5_addr_0 = (r5 + r6);
    r31 = MemoryInline::FlatRead32(r5_addr_0);
    r5 = 0;
    r6 = MemoryInline::FlatRead8((r31 + 2248));
    r6 = (r6 * 96);
    r6 = (r31 + r6);
    r6 = (r6 + 160);
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    ctr = r0;
}

loc_801C7F5C:
{
    r6_addr_2 = (r6 + r8);
    MemoryInline::FlatWrite8(r6_addr_2, static_cast<uint8_t>(r5));
    r7 = (r6 + r8);
    r8 = (r8 + 8);
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 3), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 4), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 5), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 6), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 7), static_cast<uint8_t>(r5));
    r7 = (r6 + r8);
    r6_addr_3 = (r6 + r8);
    MemoryInline::FlatWrite8(r6_addr_3, static_cast<uint8_t>(r5));
    r8 = (r8 + 8);
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 3), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 4), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 5), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 6), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 7), static_cast<uint8_t>(r5));
    r7 = (r6 + r8);
    r6_addr_4 = (r6 + r8);
    MemoryInline::FlatWrite8(r6_addr_4, static_cast<uint8_t>(r5));
    r8 = (r8 + 8);
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 3), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 4), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 5), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 6), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 7), static_cast<uint8_t>(r5));
    r7 = (r6 + r8);
    r6_addr_5 = (r6 + r8);
    MemoryInline::FlatWrite8(r6_addr_5, static_cast<uint8_t>(r5));
    r8 = (r8 + 8);
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 3), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 4), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 5), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 6), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 7), static_cast<uint8_t>(r5));
    r7 = (r6 + r8);
    r6_addr_6 = (r6 + r8);
    MemoryInline::FlatWrite8(r6_addr_6, static_cast<uint8_t>(r5));
    r8 = (r8 + 8);
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 3), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 4), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 5), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 6), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 7), static_cast<uint8_t>(r5));
    r7 = (r6 + r8);
    r6_addr_7 = (r6 + r8);
    MemoryInline::FlatWrite8(r6_addr_7, static_cast<uint8_t>(r5));
    r8 = (r8 + 8);
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 3), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 4), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 5), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 6), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r7 + 7), static_cast<uint8_t>(r5));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801C7F5C;
    }
}

loc_801C8050:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 1), 0, 5u, true, false);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_0 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r0 & 40735);
}

loc_801C8064:
{
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 2232));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801C8070:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801C8084;
    }
}

loc_801C8074:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 41), static_cast<uint8_t>(r0));
    goto loc_801C8090;
}

loc_801C8084:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r0 = -4;
    MemoryInline::FlatWrite8((r5 + 41), static_cast<uint8_t>(r0));
}

loc_801C8090:
{
    r0 = MemoryInline::FlatRead8((r31 + 2241));
    r6 = (r4 + 6);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r7 = 12;
    MemoryInline::FlatWrite8((r5 + 40), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite32((r31 + 2120), r0);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 3));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & -4);
    r9 = MemoryInline::FlatRead16((r31 + 2164));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 3);
    r8 = (r5 & -4);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    r0 = (r8 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r9);
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 2));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r9 = MemoryInline::FlatRead16((r31 + 2166));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_3 & 2);
    r8 = (r5 & -4);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r8 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r9);
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r0));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 5));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 2));
    r4 = (r1 + 8);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & -4);
    r9 = MemoryInline::FlatRead16((r31 + 2168));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 2);
    r8 = (r5 & -4);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r8 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r9);
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead8((r31 + 2251));
    ctx->lr = 0x801C8160u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801C6EDCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r31 + 2248));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_5 & 255);
    MemoryInline::FlatWrite8((r31 + 2248), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFDC7F gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0xFF8003FF fpr_write=0xFF8003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801C7F18 func_801C7F18 preserves=true fpr_mask=0x00000000
