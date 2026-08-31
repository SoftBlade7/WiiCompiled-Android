#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8054400C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r9_ca_0 = 0;
    uint32_t r9_ca_1 = 0;
    uint32_t r9_ca_2 = 0;
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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8054400C;

loc_8054400C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80540000u;
    r5 = 0x80540000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + 17052);
    r5 = (r5 + 17176);
    r6 = 112;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r7 = 32;
    r3 = (r3 + 32);
    ctx->lr = 0x80544040u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80020FF4u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x80540000u;
    r5 = 0x80540000u;
    r3 = (r31 + 3616);
    r6 = 100;
    r4 = (r4 + 17240);
    r5 = (r5 + 17276);
    r7 = 192;
    ctx->lr = 0x80544060u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80020FF4u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x80540000u;
    r5 = 0x80540000u;
    r3 = (r31 + 22816);
    r6 = 28;
    r4 = (r4 + 17340);
    r5 = (r5 + 17376);
    r7 = 6;
    ctx->lr = 0x80544080u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80020FF4u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r31 + 65536);
    r3 = 0;
    r0 = (r4 + -28652);
    r6 = 0x808B0000u;
    r7 = (r4 + -28656);
    r5 = 0x808B0000u;
    r6 = (r6 + 15524);
    MemoryInline::FlatWrite32((r31 + 22984), r6);
    r5 = (r5 + 15500);
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
}

loc_805440A8:
{
    MemoryInline::FlatWrite32((r4 + -28680), r5);
    MemoryInline::FlatWrite32((r4 + -28676), r3);
    MemoryInline::FlatWrite32((r4 + -28672), r3);
    MemoryInline::FlatWrite32((r4 + -28668), r3);
    MemoryInline::FlatWrite32((r4 + -28664), r3);
    MemoryInline::FlatWrite32((r4 + -28660), r3);
    if (((cr & 0x08000000u) == 0)) {
        goto loc_805441C0;
    }
}

loc_805440C4:
{
    r6 = (r0 - r7);
    r4 = (r4 + -28684);
    r8 = (r6 + 3);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r8) >> 2);
    r9_ca_1 = (xer >> 29) & 1u;
    r9 = (r0 + r9_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r9_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r10 = (r9 + 1);
}

loc_805440E0:
{
    if ((static_cast<int32_t>(r10) <= static_cast<int32_t>(8))) {
        goto loc_80544190;
    }
}

loc_805440E4:
{
    r3 = 0;
    r5 = 0;
    if (((cr & 0x04000000u) != 0)) {
        goto loc_80544114;
    }
}

loc_805440F0:
{
    r0 = (r6 & -2147483648);
}

loc_805440F4:
{
    r6 = 1;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80544108;
    }
}

loc_805440FC:
{
    r0 = (r8 & -2147483648);
}

loc_80544100:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80544108;
    }
}

loc_80544104:
{
    r6 = 0;
}

loc_80544108:
{
}

loc_8054410C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80544114;
    }
}

loc_80544110:
{
    r5 = 1;
}

loc_80544114:
{
}

loc_80544118:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80544144;
    }
}

loc_8054411C:
{
    r6 = (r9 & -2147483648);
}

loc_80544120:
{
    r5 = 1;
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80544138;
    }
}

loc_80544128:
{
    r0 = (r10 & -2147483648);
}

loc_80544130:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(r0))) {
        goto loc_80544138;
    }
}

loc_80544134:
{
    r5 = 0;
}

loc_80544138:
{
}

loc_8054413C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80544144;
    }
}

loc_80544140:
{
    r3 = 1;
}

loc_80544144:
{
}

loc_80544148:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80544190;
    }
}

loc_8054414C:
{
    r0 = (r4 + 31);
    r3 = 0;
    r0 = (r0 - r7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    ctr = r0;
}

loc_80544164:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r4))) {
        goto loc_80544190;
    }
}

loc_80544168:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r7, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r7, r3);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r7 + 4), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r7 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r7 + 12), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r7 + 16), r3);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r7 + 20), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r7 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r7 + 28), r3);
    }
    r7 = (r7 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80544168;
    }
}

loc_80544190:
{
    r3 = (r31 + 65536);
    r4 = 0;
    r3 = (r3 + -28652);
    r0 = (r3 + 3);
    r0 = (r0 - r7);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_3 & 1073741823);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r3));
}

loc_805441B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805441C0;
    }
}

loc_805441B4:
{
    MemoryInline::FlatWrite32(r7, r4);
    r7 = (r7 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805441B4;
    }
}

loc_805441C0:
{
    r8 = 0x808B0000u;
    r3 = (r31 + 65536);
    r8 = (r8 + 12960);
    r0 = 5000;
    r4 = 0x80540000u;
    r5 = 0x80540000u;
    MemoryInline::FlatWrite32((r3 + -28652), r8);
    r4 = (r4 + 17640);
    r5 = (r5 + 17676);
    r6 = 20;
    MemoryInline::FlatWrite16((r3 + -28648), static_cast<uint16_t>(r0));
    r7 = 10;
    MemoryInline::FlatWrite32((r3 + -28644), r8);
    MemoryInline::FlatWrite16((r3 + -28640), static_cast<uint16_t>(r0));
    r3 = (r3 + -28280);
    ctx->lr = 0x80544200u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80020FF4u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r31 + 65536);
    r3 = 0;
    r0 = MemoryInline::FlatRead8((r4 + -27674));
    r5 = 0x808B0000u;
    r5 = (r5 + 11588);
    MemoryInline::FlatWrite32((r4 + -28080), r5);
}

loc_8054421C:
{
    MemoryInline::FlatWrite8((r4 + -28070), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r4 + -28076), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r4 + -28074), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r4 + -28072), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r4 + -27671), static_cast<uint8_t>(r3));
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(99))) {
        goto loc_8054423C;
    }
}

loc_80544234:
{
    r0 = 99;
    MemoryInline::FlatWrite8((r4 + -27674), static_cast<uint8_t>(r0));
}

loc_8054423C:
{
    r3 = (r31 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -27673));
}

loc_80544248:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(12))) {
        goto loc_80544254;
    }
}

loc_8054424C:
{
    r0 = 12;
    MemoryInline::FlatWrite8((r3 + -27673), static_cast<uint8_t>(r0));
}

loc_80544254:
{
    r3 = (r31 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -27672));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
}

loc_80544260:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8054426C;
    }
}

loc_80544264:
{
    r0 = 31;
    MemoryInline::FlatWrite8((r3 + -27672), static_cast<uint8_t>(r0));
}

loc_8054426C:
{
    r4 = (r31 + 65536);
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + -27674), static_cast<uint8_t>(r0));
    r3 = r31;
    MemoryInline::FlatWrite8((r4 + -27673), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + -27672), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r4 + -27667), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8054400C func_8054400C preserves=true fpr_mask=0x00000000
