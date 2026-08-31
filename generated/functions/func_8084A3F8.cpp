#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8084A3F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8084A3F8;

loc_8084A3F8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r25);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r27);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r29);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r31);
    r26_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r26 = (r26_rot_0 & -4);
    r6 = (r3 + r26);
    r29 = r3;
    r30 = r4;
    r5 = MemoryInline::FlatRead32((r5 + 7736));
    r0 = MemoryInline::FlatRead32((r5 + 152));
    r3 = (r0 + r26);
    r3 = MemoryInline::FlatRead32((r3 + 300));
    MemoryInline::FlatWrite32((r6 + 1736), r3);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8081CD3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r27 = r3;
    r31 = 0;
    r28 = 0;
    r25 = 0;
}

loc_8084A444:
{
    r3 = r25;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8081CB70u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r3));
}

loc_8084A450:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8084A49C;
    }
}

loc_8084A454:
{
    r4 = MemoryInline::FlatRead32((r29 + 1944));
    r3 = r25;
    ctx->lr = 0x8084A460u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8081CFB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8084A464:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8084A49C;
    }
}

loc_8084A468:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80860A8Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8084A470:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8084A488;
    }
}

loc_8084A474:
{
    r0 = (r25 + -18);
}

loc_8084A47C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8084A488;
    }
}

loc_8084A480:
{
}

loc_8084A484:
{
    if ((static_cast<uint32_t>(r25) > static_cast<uint32_t>(2))) {
        goto loc_8084A49C;
    }
}

loc_8084A488:
{
    r0 = (r29 + r28);
    r31 = (r31 + 1);
    r3 = (r0 + r26);
    r28 = (r28 + 16);
    MemoryInline::FlatWrite32((r3 + 1752), r25);
}

loc_8084A49C:
{
    r25 = (r25 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(36));
}

loc_8084A4A4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8084A444;
    }
}

loc_8084A4A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(12));
}

loc_8084A4AC:
{
    r6 = r31;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8084A5AC;
    }
}

loc_8084A4B4:
{
    r5 = (12 - r31);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r31) ? 1u : 0u) << 29);
}

loc_8084A4BC:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(8))) {
        goto loc_8084A57C;
    }
}

loc_8084A4C0:
{
}

loc_8084A4C4:
{
    r3 = 0;
    r4 = 0;
    r0 = 0;
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(13))) {
        goto loc_8084A4D8;
    }
}

loc_8084A4D4:
{
    r0 = 1;
}

loc_8084A4D8:
{
}

loc_8084A4DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084A4F0;
    }
}

loc_8084A4E0:
{
    r0 = (r31 + -2147483648);
}

loc_8084A4E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8084A4F0;
    }
}

loc_8084A4EC:
{
    r4 = 1;
}

loc_8084A4F0:
{
}

loc_8084A4F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8084A520;
    }
}

loc_8084A4F8:
{
    r0 = (0 - r31);
    r4 = 1;
    r0 = (r0 & -2147483648);
}

loc_8084A504:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8084A514;
    }
}

loc_8084A508:
{
    r0 = (r5 & -2147483648);
}

loc_8084A50C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084A514;
    }
}

loc_8084A510:
{
    r4 = 0;
}

loc_8084A514:
{
}

loc_8084A518:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8084A520;
    }
}

loc_8084A51C:
{
    r3 = 1;
}

loc_8084A520:
{
}

loc_8084A524:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8084A57C;
    }
}

loc_8084A528:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r0 = (11 - r31);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(11) >= static_cast<uint32_t>(r31) ? 1u : 0u) << 29);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(4));
    r5 = (r5_rot_1 & -16);
    r3 = -1;
    r4 = (r29 + r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    r4 = (r5 + r4);
    ctr = r0;
}

loc_8084A54C:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(4))) {
        goto loc_8084A57C;
    }
}

loc_8084A550:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 1752), 0, 116u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r4 + 1752), r3);
    r6 = (r6 + 8);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 1768), r3);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r4 + 1784), r3);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r4 + 1800), r3);
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r4 + 1816), r3);
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r4 + 1832), r3);
    MemoryInline::WriteResolved32(guest_range_0, 96u, (r4 + 1848), r3);
    MemoryInline::WriteResolved32(guest_range_0, 112u, (r4 + 1864), r3);
    r4 = (r4 + 128);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8084A550;
    }
}

loc_8084A57C:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r4 = (r4_rot_3 & -16);
    r3 = (r29 + r0);
    r4 = (r4 + r3);
    r0 = (12 - r6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(12) >= static_cast<uint32_t>(r6) ? 1u : 0u) << 29);
    r3 = -1;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(12));
}

loc_8084A59C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8084A5AC;
    }
}

loc_8084A5A0:
{
    MemoryInline::FlatWrite32((r4 + 1752), r3);
    r4 = (r4 + 16);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8084A5A0;
    }
}

loc_8084A5AC:
{
    r3 = r31;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 20));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 28));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r1 + 36));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r1 + 40));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r1 + 44));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE001FFB gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8084A3F8 func_8084A3F8 preserves=true fpr_mask=0x00000000
