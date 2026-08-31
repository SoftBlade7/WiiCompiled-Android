#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800946E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800946E0;

loc_800946E0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 44u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r4 + 28));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -28444), 0, 8u, true, false);
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28440));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    SetCRFloatResident(cr, 0, f2.d, f9.d);
}

loc_80094704:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            f6.d = PpcBitCastToFloatInline(resolved_pair.first);
            f5.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            f4.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
        }
    }
    r5 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r4 + 36));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 40));
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 28), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f7.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r3 + 28), f8.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r3 + 32), f7.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f6.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r3 + 36), f6.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r3 + 40), f5.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 44), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 48), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r3 + 52), r5);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 56), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r3 + 60), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r3 + 64), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r3 + 68), f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80094764;
    }
}

loc_80094760:
{
    goto loc_80094768;
}

loc_80094764:
{
    f9.d = f2.d;
}

loc_80094768:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 348));
    SetCRFloatResident(cr, 0, f9.d, f0.d);
}

loc_80094770:
{
    r0 = cr;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r4 + 28));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 1);
    r29 = (r0 ^ 1);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8009478C:
{
    MemoryInline::FlatWrite32((r3 + 720), r0);
    MemoryInline::FlatWrite32((r3 + 344), r0);
    MemoryInline::FlatWriteFloat32((r3 + 724), f9.d);
    MemoryInline::FlatWriteFloat32((r3 + 348), f9.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800947A4;
    }
}

loc_800947A0:
{
    goto loc_800947B8;
}

loc_800947A4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28440));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800947AC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800947B4;
    }
}

loc_800947B0:
{
    goto loc_800947B8;
}

loc_800947B4:
{
    f1.d = f0.d;
}

loc_800947B8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28440));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800947C8:
{
    MemoryInline::FlatWriteFloat32((r3 + 728), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 352), f1.d);
    MemoryInline::FlatWrite32((r3 + 732), r0);
    MemoryInline::FlatWrite32((r3 + 356), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800947E0;
    }
}

loc_800947DC:
{
    goto loc_800947E4;
}

loc_800947E0:
{
    f2.d = f0.d;
}

loc_800947E4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28444));
    MemoryInline::FlatWriteFloat32((r3 + 736), f2.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800947F4:
{
    MemoryInline::FlatWriteFloat32((r3 + 360), f2.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80094800;
    }
}

loc_800947FC:
{
    goto loc_80094814;
}

loc_80094800:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28440));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80094808:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80094810;
    }
}

loc_8009480C:
{
    goto loc_80094814;
}

loc_80094810:
{
    f1.d = f0.d;
}

loc_80094814:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28444));
    MemoryInline::FlatWriteFloat32((r3 + 740), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80094824:
{
    MemoryInline::FlatWriteFloat32((r3 + 364), f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80094830;
    }
}

loc_8009482C:
{
    goto loc_80094844;
}

loc_80094830:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28440));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80094838:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80094840;
    }
}

loc_8009483C:
{
    goto loc_80094844;
}

loc_80094840:
{
    f2.d = f0.d;
}

loc_80094844:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28444));
    MemoryInline::FlatWriteFloat32((r3 + 744), f2.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80094854:
{
    MemoryInline::FlatWriteFloat32((r3 + 368), f2.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80094860;
    }
}

loc_8009485C:
{
    goto loc_80094874;
}

loc_80094860:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28440));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80094868:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80094870;
    }
}

loc_8009486C:
{
    goto loc_80094874;
}

loc_80094870:
{
    f1.d = f0.d;
}

loc_80094874:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r4 + 36));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28444));
    MemoryInline::FlatWriteFloat32((r3 + 748), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80094884:
{
    MemoryInline::FlatWriteFloat32((r3 + 372), f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80094890;
    }
}

loc_8009488C:
{
    goto loc_800948A4;
}

loc_80094890:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28440));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80094898:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800948A0;
    }
}

loc_8009489C:
{
    goto loc_800948A4;
}

loc_800948A0:
{
    f2.d = f0.d;
}

loc_800948A4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 40));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28444));
    MemoryInline::FlatWriteFloat32((r3 + 752), f2.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800948B4:
{
    MemoryInline::FlatWriteFloat32((r3 + 376), f2.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800948C0;
    }
}

loc_800948BC:
{
    goto loc_800948D4;
}

loc_800948C0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28440));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800948C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800948D0;
    }
}

loc_800948CC:
{
    goto loc_800948D4;
}

loc_800948D0:
{
    f1.d = f0.d;
}

loc_800948D4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -28444));
    MemoryInline::FlatWriteFloat32((r3 + 756), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800948E4:
{
    MemoryInline::FlatWriteFloat32((r3 + 380), f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800948F0;
    }
}

loc_800948EC:
{
    goto loc_80094904;
}

loc_800948F0:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28440));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800948F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80094900;
    }
}

loc_800948FC:
{
    goto loc_80094904;
}

loc_80094900:
{
    f2.d = f0.d;
}

loc_80094904:
{
    r0 = MemoryInline::FlatRead8((r3 + 12));
    r4 = 0;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r2 + -28440));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80094914:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 384), 0, 392u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 384u, (r3 + 768), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r3 + 392), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, (r3 + 384), r4);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r3 + 388), r4);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r3 + 396), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 376u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_3, 376u, (r3 + 760), r4);
        MemoryInline::WriteResolved32(guest_range_3, 380u, (r3 + 764), r4);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_3, 388u, (r3 + 772), f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80094940;
    }
}

loc_80094938:
{
    r3 = 1;
    goto loc_80094A18;
}

loc_80094940:
{
    r3 = (r3 + 72);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x801280B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r0 = (r3 + 135);
    r3 = (r31 + 400);
    r30 = (r0 & -32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x801290A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r0 = (r3 + 135);
    r3 = (r0 & -32);
}

loc_80094964:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r30))) {
        goto loc_8009496C;
    }
}

loc_80094968:
{
    r3 = r30;
}

loc_8009496C:
{
    r4 = MemoryInline::FlatRead32((r31 + 20));
}

loc_80094974:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80094980;
    }
}

loc_80094978:
{
    r0 = 0;
    goto loc_80094988;
}

loc_80094980:
{
    r0 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r0 - r4);
}

loc_80094988:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8009498C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80094998;
    }
}

loc_80094990:
{
    r3 = 0;
    goto loc_80094A18;
}

loc_80094998:
{
}

loc_8009499C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800949E8;
    }
}

loc_800949A0:
{
    r3 = (r31 + 20);
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->lr = 0x800949B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8008D1E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    r0 = MemoryInline::FlatRead32((r31 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800949B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800949C8;
    }
}

loc_800949BC:
{
    r3 = (r31 + 400);
    ctx->lr = 0x800949C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    InvokeDirectCpu<0x801292ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800949D0;
}

loc_800949C8:
{
    r3 = (r31 + 72);
    ctx->lr = 0x800949D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    InvokeDirectCpu<0x801282DCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800949D0:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r29 = r3;
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r31 + 20);
    ctx->lr = 0x800949E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8008D240u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    goto loc_80094A0C;
}

loc_800949E8:
{
    r0 = MemoryInline::FlatRead32((r31 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800949F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80094A00;
    }
}

loc_800949F4:
{
    r3 = (r31 + 400);
    ctx->lr = 0x800949FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    InvokeDirectCpu<0x801293BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80094A08;
}

loc_80094A00:
{
    r3 = (r31 + 72);
    ctx->lr = 0x80094A08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    InvokeDirectCpu<0x801283ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80094A08:
{
    r29 = r3;
}

loc_80094A0C:
{
    r0 = (0 - r29);
    r0 = (r0 | r29);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_80094A18:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800946E0 func_800946E0 preserves=true fpr_mask=0x00000000
