#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B9294(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r30_rot_0 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801B9294;

loc_801B9294:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = (r3 & 3);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r30 = (r30_rot_0 & 1073741823);
    MemoryInline::FlatWriteRam32((r4 + 204), r30);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B917Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r5 = 2;
    r4 = -872415232;
    r0 = 0;
    MemoryInline::FlatWrite16((r4 + 8194), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    goto loc_801B92E0;
}

loc_801B92D4:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
}

loc_801B92E0:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_801B92E8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1000))) {
        goto loc_801B92D4;
    }
}

loc_801B92EC:
{
    r5 = -872415232;
    r0 = 0;
    MemoryInline::FlatWrite16((r5 + 8194), static_cast<uint16_t>(r0));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 38u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r3 + 26));
    MemoryInline::FlatWrite16((r5 + 8198), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 29u, (r3 + 29));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 30u, (r3 + 30));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_0 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite16((r5 + 8196), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 31u, (r3 + 31));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 28u, (r3 + 28));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r0 = (r0_rot_1 & -128);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16((r5 + 8202), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 32u, (r3 + 32));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 65534);
    MemoryInline::FlatWrite16((r5 + 8200), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r13 + -24656));
}

loc_801B9338:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801B9350;
    }
}

loc_801B933C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 34u, (r3 + 34));
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite16((r5 + 8306), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 36u, (r3 + 36));
    MemoryInline::FlatWrite16((r5 + 8308), static_cast<uint16_t>(r0));
}

loc_801B9350:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    r4 = -872415232;
    r6 = 10280;
    r5 = 1;
    MemoryInline::FlatWrite16((r4 + 8192), static_cast<uint16_t>(r0));
    r0 = 4097;
}

loc_801B936C:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 2u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 2));
            r7 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 4));
        }
    }
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & -2);
    r7 = (r7 + r8);
    r7 = (r7 + -2);
    MemoryInline::FlatWrite16((r4 + 8206), static_cast<uint16_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r3 + 8));
    r7 = (r7 + 2);
    MemoryInline::FlatWrite16((r4 + 8204), static_cast<uint16_t>(r7));
    r8 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 2));
    r7 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 6));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r8 = (r8_rot_1 & -2);
    r7 = (r7 + r8);
    r7 = (r7 + -2);
    MemoryInline::FlatWrite16((r4 + 8210), static_cast<uint16_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r3 + 10));
    r7 = (r7 + 2);
    MemoryInline::FlatWrite16((r4 + 8208), static_cast<uint16_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r3 + 16));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 12));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(5));
    r7 = (r7_rot_0 & -32);
    r7 = (r8 | r7);
    MemoryInline::FlatWrite16((r4 + 8214), static_cast<uint16_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r3 + 20));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r3 + 14));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(5));
    r7 = (r7_rot_1 & -32);
    r7 = (r8 | r7);
    MemoryInline::FlatWrite16((r4 + 8212), static_cast<uint16_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r3 + 18));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r3 + 13));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(5));
    r7 = (r7_rot_2 & -32);
    r7 = (r8 | r7);
    MemoryInline::FlatWrite16((r4 + 8218), static_cast<uint16_t>(r7));
    r7 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r3 + 22));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r3 + 15));
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(5));
    r7 = (r7_rot_3 & -32);
    r7 = (r8 | r7);
    MemoryInline::FlatWrite16((r4 + 8216), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r4 + 8264), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r4 + 8246), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r4 + 8244), static_cast<uint16_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r3 + 24));
            r3 = MemoryInline::ReadResolved16(guest_range_0, 26u, (r3 + 26));
        }
    }
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r5 = (r5_rot_0 & 2147483647);
    r0 = (r3 + 1);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite16((r4 + 8242), static_cast<uint16_t>(r0));
    r3 = (r5 & 65535);
    r0 = (r3 | 4096);
    MemoryInline::FlatWrite16((r4 + 8240), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(4))) {
        goto loc_801B9448;
    }
}

loc_801B9438:
{
}

loc_801B943C:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(1))) {
        goto loc_801B944C;
    }
}

loc_801B9440:
{
}

loc_801B9448:
{
    r30 = 0;
}

loc_801B944C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
}

loc_801B9450:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801B9474;
    }
}

loc_801B9454:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & -256);
    r3 = -872415232;
    r4 = (r0 | 1);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r4_mrot_0 = (r4_rot_0 & 4);
    r4_mdest_0 = (r4 & -5);
    r4 = (r4_mdest_0 | r4_mrot_0);
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 8194), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 8300), static_cast<uint16_t>(r0));
    goto loc_801B948C;
}

loc_801B9474:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & -256);
    r3 = -872415232;
    r4 = (r0 | 5);
    MemoryInline::FlatWrite16((r3 + 8194), static_cast<uint16_t>(r4));
    r0 = 1;
    MemoryInline::FlatWrite16((r3 + 8300), static_cast<uint16_t>(r0));
}

loc_801B948C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000207B gpr_write=0xC00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801B9294 func_801B9294 preserves=true fpr_mask=0x00000000
