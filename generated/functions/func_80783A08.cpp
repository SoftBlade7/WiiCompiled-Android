#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80783A08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_ca_6 = 0;
    uint32_t r0_ca_7 = 0;
    uint32_t r0_ca_8 = 0;
    uint32_t r0_ca_9 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_not_3 = 0;
    uint32_t r0_not_4 = 0;
    uint32_t r0_not_5 = 0;
    uint32_t r0_not_6 = 0;
    uint32_t r0_not_7 = 0;
    uint32_t r0_not_8 = 0;
    uint32_t r0_not_9 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80783A08;

loc_80783A08:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_80783A10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80783A34;
    }
}

loc_80783A14:
{
    r7 = (r4 + 65536);
    r5 = 131072;
    r6 = MemoryInline::FlatRead32((r7 + -28012));
    r0 = (r5 + -31073);
}

loc_80783A28:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_80783A34;
    }
}

loc_80783A2C:
{
    r0 = (r6 + 1);
    MemoryInline::FlatWrite32((r7 + -28012), r0);
}

loc_80783A34:
{
    r0 = MemoryInline::FlatRead8((r3 + 17));
}

loc_80783A3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80783A60;
    }
}

loc_80783A40:
{
    r7 = (r4 + 65536);
    r5 = 131072;
    r6 = MemoryInline::FlatRead32((r7 + -28008));
    r0 = (r5 + -31073);
}

loc_80783A54:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_80783A60;
    }
}

loc_80783A58:
{
    r0 = (r6 + 1);
    MemoryInline::FlatWrite32((r7 + -28008), r0);
}

loc_80783A60:
{
    r6 = (r4 + 65536);
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r6 + -27972));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 18376));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 20));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80783A78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80783A94;
    }
}

loc_80783A7C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80783A84:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80783A8C;
    }
}

loc_80783A88:
{
    f1.d = f0.d;
}

loc_80783A8C:
{
    r5 = (r4 + 65536);
    MemoryInline::FlatWriteFloat32((r5 + -27972), f1.d);
}

loc_80783A94:
{
    r6 = (r4 + 65536);
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r6 + -27964));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 18376));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80783AAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80783AC8;
    }
}

loc_80783AB0:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80783AB8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80783AC0;
    }
}

loc_80783ABC:
{
    f1.d = f0.d;
}

loc_80783AC0:
{
    r5 = (r4 + 65536);
    MemoryInline::FlatWriteFloat32((r5 + -27964), f1.d);
}

loc_80783AC8:
{
    r6 = (r4 + 65536);
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r6 + -27968));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 18376));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 24));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80783AE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80783AFC;
    }
}

loc_80783AE4:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80783AEC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80783AF4;
    }
}

loc_80783AF0:
{
    f1.d = f0.d;
}

loc_80783AF4:
{
    r5 = (r4 + 65536);
    MemoryInline::FlatWriteFloat32((r5 + -27968), f1.d);
}

loc_80783AFC:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_80783B04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80783B28;
    }
}

loc_80783B08:
{
    r5 = (r4 + 65536);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r6 = (r5 + r0);
    r5 = MemoryInline::FlatRead16((r6 + -27958));
}

loc_80783B1C:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(65535))) {
        goto loc_80783B28;
    }
}

loc_80783B20:
{
    r0 = (r5 + 1);
    MemoryInline::FlatWrite16((r6 + -27958), static_cast<uint16_t>(r0));
}

loc_80783B28:
{
    r0 = MemoryInline::FlatRead32((r3 + 36));
}

loc_80783B30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80783B54;
    }
}

loc_80783B34:
{
    r5 = (r4 + 65536);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r6 = (r5 + r0);
    r5 = MemoryInline::FlatRead16((r6 + -27908));
}

loc_80783B48:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(65535))) {
        goto loc_80783B54;
    }
}

loc_80783B4C:
{
    r0 = (r5 + 1);
    MemoryInline::FlatWrite16((r6 + -27908), static_cast<uint16_t>(r0));
}

loc_80783B54:
{
    r0 = MemoryInline::FlatRead32((r3 + 40));
}

loc_80783B5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80783B80;
    }
}

loc_80783B60:
{
    r5 = (r4 + 65536);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r6 = (r5 + r0);
    r5 = MemoryInline::FlatRead16((r6 + -27836));
}

loc_80783B74:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(65535))) {
        goto loc_80783B80;
    }
}

loc_80783B78:
{
    r0 = (r5 + 1);
    MemoryInline::FlatWrite16((r6 + -27836), static_cast<uint16_t>(r0));
}

loc_80783B80:
{
    r0 = MemoryInline::FlatRead32((r3 + 44));
}

loc_80783B88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80783BAC;
    }
}

loc_80783B8C:
{
    r5 = (r4 + 65536);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r6 = (r5 + r0);
    r5 = MemoryInline::FlatRead16((r6 + -27836));
}

loc_80783BA0:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(65535))) {
        goto loc_80783BAC;
    }
}

loc_80783BA4:
{
    r0 = (r5 + 1);
    MemoryInline::FlatWrite16((r6 + -27836), static_cast<uint16_t>(r0));
}

loc_80783BAC:
{
    r0 = MemoryInline::FlatRead8((r3 + 48));
}

loc_80783BB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80783BD8;
    }
}

loc_80783BB8:
{
    r7 = (r4 + 65536);
    r5 = 131072;
    r6 = MemoryInline::FlatRead32((r7 + -28004));
    r0 = (r5 + -31073);
}

loc_80783BCC:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_80783BD8;
    }
}

loc_80783BD0:
{
    r0 = (r6 + 1);
    MemoryInline::FlatWrite32((r7 + -28004), r0);
}

loc_80783BD8:
{
    r0 = MemoryInline::FlatRead8((r3 + 49));
}

loc_80783BE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80783C04;
    }
}

loc_80783BE4:
{
    r7 = (r4 + 65536);
    r5 = 131072;
    r6 = MemoryInline::FlatRead32((r7 + -28000));
    r0 = (r5 + -31073);
}

loc_80783BF8:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_80783C04;
    }
}

loc_80783BFC:
{
    r0 = (r6 + 1);
    MemoryInline::FlatWrite32((r7 + -28000), r0);
}

loc_80783C04:
{
    r6 = (r4 + 65536);
    r5 = 131072;
    r6 = MemoryInline::FlatRead32((r6 + -27988));
    r5 = (r5 + -31073);
    r0 = MemoryInline::FlatRead32((r3 + 52));
}

loc_80783C1C:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r5))) {
        goto loc_80783C48;
    }
}

loc_80783C20:
{
    r7 = (r6 + r0);
    r6 = 0;
    r0 = (r5 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    r0_not_1 = ~(r6);
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_not_1 + r6);
    r0 = (r0 + r0_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_not_2 = ~(r5);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_not_2 + r5);
    r0 = (r0 + r0_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (0 - r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80783C40;
    }
}

loc_80783C3C:
{
    r7 = r5;
}

loc_80783C40:
{
    r5 = (r4 + 65536);
    MemoryInline::FlatWrite32((r5 + -27988), r7);
}

loc_80783C48:
{
    r6 = (r4 + 65536);
    r5 = 131072;
    r6 = MemoryInline::FlatRead32((r6 + -27984));
    r5 = (r5 + -31073);
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_80783C60:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r5))) {
        goto loc_80783C8C;
    }
}

loc_80783C64:
{
    r7 = (r6 + r0);
    r6 = 0;
    r0 = (r5 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    r0_not_4 = ~(r6);
    r0_ca_4 = (xer >> 29) & 1u;
    r0 = (r0_not_4 + r6);
    r0 = (r0 + r0_ca_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_4)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_4)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_not_5 = ~(r5);
    r0_ca_5 = (xer >> 29) & 1u;
    r0 = (r0_not_5 + r5);
    r0 = (r0 + r0_ca_5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_5)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_5)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (0 - r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80783C84;
    }
}

loc_80783C80:
{
    r7 = r5;
}

loc_80783C84:
{
    r5 = (r4 + 65536);
    MemoryInline::FlatWrite32((r5 + -27984), r7);
}

loc_80783C8C:
{
    r6 = (r4 + 65536);
    r5 = 131072;
    r6 = MemoryInline::FlatRead32((r6 + -27980));
    r5 = (r5 + -31073);
    r0 = MemoryInline::FlatRead32((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
}

loc_80783CA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80783CD0;
    }
}

loc_80783CA8:
{
    r7 = (r6 + r0);
    r6 = 0;
    r0 = (r5 - r7);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r7) ? 1u : 0u) << 29);
    r0_not_7 = ~(r6);
    r0_ca_7 = (xer >> 29) & 1u;
    r0 = (r0_not_7 + r6);
    r0 = (r0 + r0_ca_7);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_7)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_7)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_not_8 = ~(r5);
    r0_ca_8 = (xer >> 29) & 1u;
    r0 = (r0_not_8 + r5);
    r0 = (r0 + r0_ca_8);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_8)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_8)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (0 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80783CC8;
    }
}

loc_80783CC4:
{
    r7 = r5;
}

loc_80783CC8:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite32((r4 + -27980), r7);
}

loc_80783CD0:
{
    r4 = 0x808A0000u;
    r5 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 18368));
    r0 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 16), 0, 48u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 16), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 17), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 20), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 24), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 28), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 32), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 40), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 44), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 52), r5);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 56), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 60), r5);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80783A08 func_80783A08 preserves=true fpr_mask=0x00000000
