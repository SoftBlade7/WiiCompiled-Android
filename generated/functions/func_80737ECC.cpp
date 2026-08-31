#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80737ECC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80737ECC;

loc_80737ECC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r31);
    r31 = 0x808D0000u;
    r31 = (r31 + -21824);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r30);
    r30 = 0x808A0000u;
    r30 = (r30 + 9960);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r29);
    r29 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r28);
    r4 = MemoryInline::FlatRead32(r3);
    r28 = MemoryInline::FlatRead32(r4);
    r3 = r28;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r5 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = r28;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r5);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r0);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r6 = MemoryInline::FlatRead32((r29 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 116));
    r5 = MemoryInline::FlatRead32((r3 + 120));
}

loc_80737F3C:
{
    r4 = MemoryInline::FlatRead32((r3 + 124));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80737F80;
    }
}

loc_80737F5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_80737F60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80738020;
    }
}

loc_80737F64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(2));
}

loc_80737F68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073807C;
    }
}

loc_80737F6C:
{
}

loc_80737F70:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_80738108;
    }
}

loc_80737F74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(4));
}

loc_80737F78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80738148;
    }
}

loc_80737F7C:
{
    goto loc_80738184;
}

loc_80737F80:
{
    f4.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r3 = 1431633920;
    f3.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r0 = (r3 + 21846);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = std::fabs(f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    f1.d = std::fabs(f3.d);
    r5 = fctiwzword0;
    f0.d = PpcFmulsInline(f2.d, f1.d);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r3 + r0);
    r6 = fctiwzword1;
    r4 = (r0 * 3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r6 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r3 = (r5 - r4);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 12), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8073800C;
    }
}

loc_80738004:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 8));
    goto loc_80738010;
}

loc_8073800C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 24));
}

loc_80738010:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 16), f0.d);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_80738020:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r3 = MemoryInline::FlatRead32((r29 + 4));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 16));
    r0 = (r3 + 1);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f3.d = std::fabs(f3.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteFloat32((r29 + 16), f1.d);
    r3 = MemoryInline::FlatRead16((r31 + 36));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    f0.d = PPC_Fctiwz(f0.d);
    r4 = MemoryInline::FlatRead16((r31 + 34));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r5 = fctiwzword2;
    MemoryInline::FlatWrite32((r29 + 4), r0);
    r0 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r5 - r0);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r29 + 8), r0);
}

loc_8073807C:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 16));
    r3 = r29;
    ctx->lr = 0x80738088u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80737C9Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r29 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80738090:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80738184;
    }
}

loc_80738094:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073809C:
{
    MemoryInline::FlatWrite32((r29 + 12), r0);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807380F0;
    }
}

loc_807380A4:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r0 = 4;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    r3 = MemoryInline::FlatRead16((r31 + 42));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryInline::FlatRead16((r31 + 40));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    f1.d = std::fabs(f1.d);
    MemoryInline::FlatWrite32((r29 + 4), r0);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r5 = fctiwzword3;
    r0 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r5 - r0);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    goto loc_80738184;
}

loc_807380F0:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = MemoryInline::FlatRead16((r31 + 38));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 4), r0);
    goto loc_80738184;
}

loc_80738108:
{
    r3 = MemoryInline::FlatRead32((r28 + 16));
    r3 = MemoryInline::FlatRead32((r3 + 344));
    r3 = MemoryInline::FlatRead32((r3 + 496));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80590A40 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80590A40
    r0 = MemoryInline::FlatRead32((r3 + 700));
}

loc_80738124:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80738130;
    }
}

loc_80738128:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 700), r0);
}

loc_80738130:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80738138:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80738184;
    }
}

loc_8073813C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 4), r0);
    goto loc_80738184;
}

loc_80738148:
{
    r3 = MemoryInline::FlatRead32((r28 + 16));
    r3 = MemoryInline::FlatRead32((r3 + 344));
    r3 = MemoryInline::FlatRead32((r3 + 496));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80590A40 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80590A40
    r0 = MemoryInline::FlatRead32((r3 + 700));
}

loc_80738164:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80738170;
    }
}

loc_80738168:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 700), r0);
}

loc_80738170:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80738178:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80738184;
    }
}

loc_8073817C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 4), r0);
}

loc_80738184:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r28 = MemoryInline::FlatRead32((r1 + 48));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000007F gpr_write=0xF00003FB gpr_return=0x00000018 fpr_read=0xC000003F fpr_write=0xC00000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80737ECC func_80737ECC preserves=true fpr_mask=0x00000000
