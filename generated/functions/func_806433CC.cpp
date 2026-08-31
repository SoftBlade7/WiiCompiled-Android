#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806433CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806433CC;

loc_806433CC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r8 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 5736), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 5792), r8);
    r7 = -1;
    r31 = 0x808A0000u;
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 5736), r7);
    r31 = (r31 + -28424);
    r4 = 65536;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 260));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 5740), r7);
    r6 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 256));
    r29 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 5744), r7);
    r5 = (r4 + -27664);
    r10 = 0;
    r11 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 5748), r7);
    r9 = 0;
    r0 = 4;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 5752), r7);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 5756), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 5760), r7);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 5764), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 5768), r7);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 5772), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 5776), r7);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 5780), r7);
    }
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 5784), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 5800), r7);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 5804), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 5808), r8);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r3 + 5812), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r3 + 5816), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r3 + 5820), r8);
    }
    r7 = MemoryInline::FlatRead32((r6 + -10424));
}

loc_8064346C:
{
    r8 = 0;
    r6 = 0;
    ctr = r0;
}

loc_80643478:
{
    r3 = MemoryInline::FlatRead16((r7 + 54));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80643480:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_80643498;
    }
}

loc_80643484:
{
    r3 = (r3 & 255);
    r3 = (r5 * r3);
    r3 = (r7 + r3);
    r3 = (r3 + 56);
    goto loc_8064349C;
}

loc_80643498:
{
    r3 = 0;
}

loc_8064349C:
{
    r3 = (r3 + r9);
    r4 = (r3 + r6);
    r3 = MemoryInline::FlatRead8((r4 + 118));
}

loc_806434AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806434B8;
    }
}

loc_806434B0:
{
    r10 = 7;
    goto loc_80643528;
}

loc_806434B8:
{
    r3 = MemoryInline::FlatRead32((r4 + 128));
}

loc_806434C0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r10))) {
        goto loc_806434C8;
    }
}

loc_806434C4:
{
    r10 = r3;
}

loc_806434C8:
{
    r3 = MemoryInline::FlatRead16((r7 + 54));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r6 = (r6 + 112);
}

loc_806434D4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_806434EC;
    }
}

loc_806434D8:
{
    r3 = (r3 & 255);
    r3 = (r5 * r3);
    r3 = (r7 + r3);
    r3 = (r3 + 56);
    goto loc_806434F0;
}

loc_806434EC:
{
    r3 = 0;
}

loc_806434F0:
{
    r3 = (r3 + r9);
    r4 = (r3 + r6);
    r3 = MemoryInline::FlatRead8((r4 + 118));
}

loc_80643500:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8064350C;
    }
}

loc_80643504:
{
    r10 = 7;
    goto loc_80643528;
}

loc_8064350C:
{
    r3 = MemoryInline::FlatRead32((r4 + 128));
}

loc_80643514:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r10))) {
        goto loc_8064351C;
    }
}

loc_80643518:
{
    r10 = r3;
}

loc_8064351C:
{
    r6 = (r6 + 112);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80643478;
    }
}

loc_80643528:
{
    r11 = (r11 + 1);
    r9 = (r9 + 896);
}

loc_80643534:
{
    if ((static_cast<int32_t>(r11) < static_cast<int32_t>(4))) {
        goto loc_8064346C;
    }
}

loc_80643538:
{
}

loc_8064353C:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_80643554;
    }
}

loc_80643540:
{
}

loc_80643544:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(1))) {
        goto loc_8064355C;
    }
}

loc_80643548:
{
}

loc_8064354C:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(2))) {
        goto loc_80643564;
    }
}

loc_80643550:
{
    goto loc_8064356C;
}

loc_80643554:
{
    r30 = 3;
    goto loc_80643570;
}

loc_8064355C:
{
    r30 = 2;
    goto loc_80643570;
}

loc_80643564:
{
    r30 = 1;
    goto loc_80643570;
}

loc_8064356C:
{
    r30 = 0;
}

loc_80643570:
{
    r3 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = (r3 + 52);
    // inline leaf 0x8061B358 (8 guest instruction(s))
}

loc_inl1_0x8061B358:
{
}

loc_inl1_0x8061B35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_inl1_0x8061B368;
    }
}

loc_inl1_0x8061B360:
{
    r3 = 0;
    goto loc_inl1_cont_8061B358;
}

loc_inl1_0x8061B368:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_cont_8061B358:
{
    // end of inlined leaf 0x8061B358
    r0 = (r3 & 15);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8064358C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8064368C;
    }
}

loc_80643590:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806435A0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806435C0;
    }
}

loc_806435A4:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_806435C4;
}

loc_806435C0:
{
    r3 = 0;
}

loc_806435C4:
{
    ctx->lr = 0x806435C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80549720u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 264));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806435D0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80643684;
    }
}

loc_806435D8:
{
    r3 = 0x809C0000u;
    r7 = MemoryInline::FlatRead32((r3 + -10424));
    r5 = MemoryInline::FlatRead16((r7 + 54));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
}

loc_806435E8:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_80643608;
    }
}

loc_806435EC:
{
    r3 = 65536;
    r4 = (r5 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r7 + r0);
    r6 = (r3 + 56);
    goto loc_8064360C;
}

loc_80643608:
{
    r6 = 0;
}

loc_8064360C:
{
}

loc_80643610:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_80643634;
    }
}

loc_80643614:
{
    r4 = MemoryInline::FlatRead16((r7 + 54));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = 65536;
    r0 = (r3 + -27664);
    r3 = (r4 & 255);
    r0 = (r0 * r3);
    r3 = (r7 + r0);
    r3 = (r3 + 56);
    goto loc_80643638;
}

loc_80643634:
{
    r3 = 0;
}

loc_80643638:
{
    r4 = (r3 + 65536);
    r3 = 131072;
    r0 = MemoryInline::FlatRead32((r4 + -28008));
    r5 = (r3 + -31073);
}

loc_8064364C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r5))) {
        goto loc_80643654;
    }
}

loc_80643650:
{
    r5 = r0;
}

loc_80643654:
{
    r4 = (r6 + 65536);
    r3 = 131072;
    r4 = MemoryInline::FlatRead32((r4 + -28012));
    r0 = (r3 + -31073);
}

loc_80643668:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80643670;
    }
}

loc_8064366C:
{
    r0 = r4;
}

loc_80643670:
{
    r0 = (r0 + r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(100));
}

loc_80643678:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80643684;
    }
}

loc_8064367C:
{
    r3 = 2;
    goto loc_80643690;
}

loc_80643684:
{
    r3 = 1;
    goto loc_80643690;
}

loc_8064368C:
{
    r3 = 0;
}

loc_80643690:
{
    r31 = 0x809C0000u;
    r4 = r30;
    r5 = MemoryInline::FlatRead32((r31 + 7736));
    r30 = MemoryInline::FlatRead32((r5 + 152));
    // inline leaf 0x805E3D38 (4 guest instruction(s))
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r0 = (r4 + r0);
    r3 = (r0 & 255);
    // end of inlined leaf 0x805E3D38
    MemoryInline::FlatWrite8((r30 + 552), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r29 + 5796));
}

loc_806436B0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_80643704;
    }
}

loc_806436B4:
{
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r4 = 1;
    r3 = (r3 + 52);
    // inline leaf 0x8061B358 (8 guest instruction(s))
}

loc_inl3_0x8061B358:
{
}

loc_inl3_0x8061B35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_inl3_0x8061B368;
    }
}

loc_inl3_0x8061B360:
{
    r3 = 0;
    goto loc_inl3_cont_8061B358;
}

loc_inl3_0x8061B368:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl3_cont_8061B358:
{
    // end of inlined leaf 0x8061B358
    r0 = (r3 & 15);
}

loc_806436CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_806436EC;
    }
}

loc_806436D0:
{
    r5 = MemoryInline::FlatRead32((r31 + 7736));
    r3 = 1;
    r4 = 0;
    r30 = MemoryInline::FlatRead32((r5 + 152));
    // inline leaf 0x805E3D38 (4 guest instruction(s))
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r0 = (r4 + r0);
    r3 = (r0 & 255);
    // end of inlined leaf 0x805E3D38
    MemoryInline::FlatWrite8((r30 + 564), static_cast<uint8_t>(r3));
    goto loc_80643704;
}

loc_806436EC:
{
    r5 = MemoryInline::FlatRead32((r31 + 7736));
    r3 = 0;
    r4 = 0;
    r30 = MemoryInline::FlatRead32((r5 + 152));
    // inline leaf 0x805E3D38 (4 guest instruction(s))
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r0 = (r4 + r0);
    r3 = (r0 & 255);
    // end of inlined leaf 0x805E3D38
    MemoryInline::FlatWrite8((r30 + 564), static_cast<uint8_t>(r3));
}

loc_80643704:
{
    r0 = MemoryInline::FlatRead32((r29 + 5788));
}

loc_8064370C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8064371C;
    }
}

loc_80643710:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80643714:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80643770;
    }
}

loc_80643718:
{
    goto loc_806437C0;
}

loc_8064371C:
{
    r27 = 0;
    r28 = 0;
    r31 = 0x809C0000u;
    r30 = 0x809C0000u;
    goto loc_80643760;
}

loc_80643730:
{
    r4 = MemoryInline::FlatRead32((r31 + 7736));
    r7 = r27;
    r3 = MemoryInline::FlatRead32((r30 + 8448));
    r0 = MemoryInline::FlatRead32((r4 + 152));
    r6 = MemoryInline::FlatRead32((r29 + 104));
    r8 = (r0 + r28);
    r4 = MemoryInline::FlatRead32((r8 + 544));
    r5 = MemoryInline::FlatRead32((r8 + 548));
    r8 = MemoryInline::FlatRead8((r8 + 552));
    // inline leaf 0x80660750 (7 guest instruction(s))
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r0 = (r0_rot_12 & -8);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 29), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 30), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 31), static_cast<uint8_t>(r8));
    // end of inlined leaf 0x80660750
    r28 = (r28 + 12);
    r27 = (r27 + 1);
}

loc_80643760:
{
    r0 = MemoryInline::FlatRead32((r29 + 5796));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r0));
}

loc_80643768:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80643730;
    }
}

loc_8064376C:
{
    goto loc_806437C0;
}

loc_80643770:
{
    r27 = 0;
    r28 = 0;
    r31 = 0x809C0000u;
    r30 = 0x809C0000u;
    goto loc_806437B4;
}

loc_80643784:
{
    r4 = MemoryInline::FlatRead32((r31 + 7736));
    r7 = r27;
    r3 = MemoryInline::FlatRead32((r30 + 8448));
    r0 = MemoryInline::FlatRead32((r4 + 152));
    r6 = MemoryInline::FlatRead32((r29 + 104));
    r8 = (r0 + r28);
    r4 = MemoryInline::FlatRead32((r8 + 544));
    r5 = MemoryInline::FlatRead32((r8 + 548));
    r8 = MemoryInline::FlatRead8((r8 + 552));
    // inline leaf 0x80660750 (7 guest instruction(s))
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & -8);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 29), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 30), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 31), static_cast<uint8_t>(r8));
    // end of inlined leaf 0x80660750
    r28 = (r28 + 12);
    r27 = (r27 + 1);
}

loc_806437B4:
{
    r0 = MemoryInline::FlatRead32((r29 + 5796));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r0));
}

loc_806437BC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80643784;
    }
}

loc_806437C0:
{
    r3 = (r29 + 480);
    r4 = 4360;
    r5 = 0;
    ctx->lr = 0x806437D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807E9A38u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806433CC func_806433CC preserves=true fpr_mask=0x00000000
