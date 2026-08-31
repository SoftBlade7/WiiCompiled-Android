#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805FD0A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805FD0A8;

loc_805FD0A8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r31 = r7;
    r0 = MemoryInline::FlatRead32((r3 + 244));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FD0D4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805FD0EC;
    }
}

loc_805FD0D8:
{
    ctx->lr = 0x805FD0DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8052A024u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = -1;
    r0 = 0;
    MemoryInline::FlatWrite32((r27 + 244), r3);
    MemoryInline::FlatWrite32((r27 + 232), r0);
}

loc_805FD0EC:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805FD0F0:
{
    MemoryInline::FlatWrite32((r27 + 232), r29);
    r6 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_805FD1C8;
    }
}

loc_805FD0FC:
{
}

loc_805FD100:
{
    r4 = (r29 + -8);
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(8))) {
        goto loc_805FD198;
    }
}

loc_805FD108:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_805FD124;
    }
}

loc_805FD110:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_805FD11C:
{
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(r0))) {
        goto loc_805FD124;
    }
}

loc_805FD120:
{
    r5 = 1;
}

loc_805FD124:
{
}

loc_805FD128:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805FD198;
    }
}

loc_805FD12C:
{
    r0 = (r4 + 7);
    r3 = r28;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    r5 = r27;
    ctr = r0;
}

loc_805FD144:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_805FD198;
    }
}

loc_805FD148:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r6 = (r6 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost((r5 + 200), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r5 + 200), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r5 + 204), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r5 + 208), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r5 + 212), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r5 + 216), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r5 + 220), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 24));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r5 + 224), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 28));
    r3 = (r3 + 32);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r5 + 228), r0);
    r5 = (r5 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805FD148;
    }
}

loc_805FD198:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r0 = (r29 - r6);
    r3 = (r28 + r4);
    r4 = (r27 + r4);
    ctr = r0;
}

loc_805FD1B0:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r29))) {
        goto loc_805FD1C8;
    }
}

loc_805FD1B4:
{
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + 4);
    MemoryInline::FlatWrite32((r4 + 200), r0);
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805FD1B4;
    }
}

loc_805FD1C8:
{
}

loc_805FD1CC:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(8))) {
        goto loc_805FD2B8;
    }
}

loc_805FD1D0:
{
    r5 = (8 - r29);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(8) >= static_cast<uint32_t>(r29) ? 1u : 0u) << 29);
}

loc_805FD1D8:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(8))) {
        goto loc_805FD290;
    }
}

loc_805FD1DC:
{
}

loc_805FD1E0:
{
    r3 = 0;
    r4 = 0;
    r0 = 0;
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(9))) {
        goto loc_805FD1F4;
    }
}

loc_805FD1F0:
{
    r0 = 1;
}

loc_805FD1F4:
{
}

loc_805FD1F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805FD20C;
    }
}

loc_805FD1FC:
{
    r0 = (r29 + -2147483648);
}

loc_805FD204:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_805FD20C;
    }
}

loc_805FD208:
{
    r4 = 1;
}

loc_805FD20C:
{
}

loc_805FD210:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805FD23C;
    }
}

loc_805FD214:
{
    r0 = (0 - r29);
    r4 = 1;
    r0 = (r0 & -2147483648);
}

loc_805FD220:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805FD230;
    }
}

loc_805FD224:
{
    r0 = (r5 & -2147483648);
}

loc_805FD228:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805FD230;
    }
}

loc_805FD22C:
{
    r4 = 0;
}

loc_805FD230:
{
}

loc_805FD234:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805FD23C;
    }
}

loc_805FD238:
{
    r3 = 1;
}

loc_805FD23C:
{
}

loc_805FD240:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805FD290;
    }
}

loc_805FD244:
{
    r0 = (7 - r29);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(7) >= static_cast<uint32_t>(r29) ? 1u : 0u) << 29);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & -4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
    r3 = 0;
    r4 = (r27 + r4);
    ctr = r0;
}

loc_805FD260:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(0))) {
        goto loc_805FD290;
    }
}

loc_805FD264:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r4 + 200), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r4 + 200), r3);
    r29 = (r29 + 8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r4 + 204), r3);
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r4 + 208), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r4 + 212), r3);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r4 + 216), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r4 + 220), r3);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r4 + 224), r3);
    }
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r4 + 228), r3);
    r4 = (r4 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805FD264;
    }
}

loc_805FD290:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r0 = (8 - r29);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(8) >= static_cast<uint32_t>(r29) ? 1u : 0u) << 29);
    r4 = (r27 + r3);
    r3 = 0;
    ctr = r0;
}

loc_805FD2A8:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(8))) {
        goto loc_805FD2B8;
    }
}

loc_805FD2AC:
{
    MemoryInline::FlatWrite32((r4 + 200), r3);
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805FD2AC;
    }
}

loc_805FD2B8:
{
    r0 = MemoryInline::FlatRead32((r27 + 172));
    MemoryInline::FlatWrite8((r27 + 236), static_cast<uint8_t>(r31));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FD2C4:
{
    MemoryInline::FlatWrite32((r27 + 240), r30);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FD308;
    }
}

loc_805FD2CC:
{
    r0 = MemoryInline::FlatRead32((r27 + 232));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805FD2D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805FD2F0;
    }
}

loc_805FD2D8:
{
    r0 = (r31 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805FD2DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805FD2E8;
    }
}

loc_805FD2E0:
{
    r5 = 0;
    goto loc_805FD2F4;
}

loc_805FD2E8:
{
    r5 = 1;
    goto loc_805FD2F4;
}

loc_805FD2F0:
{
    r5 = 0;
}

loc_805FD2F4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r27 + 244), r0);
    r3 = r27;
    r4 = MemoryInline::FlatRead32((r27 + 200));
    ctx->lr = 0x805FD308u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80529E00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805FD308:
{
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805FD0A8 func_805FD0A8 preserves=true fpr_mask=0x00000000
