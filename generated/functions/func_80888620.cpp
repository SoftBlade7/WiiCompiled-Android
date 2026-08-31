#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80888620(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80888620;

loc_80888620:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 0x808B0000u;
    MemoryInline::WriteResolved32(guest_range_3, 52u, (r1 + 52), r0);
    r7 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 10084));
    r5 = 0x808B0000u;
    MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 44), r31);
    r31 = 0x809C0000u;
    r31 = (r31 + 18920);
    MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 40), r30);
    r30 = r4;
    r4 = (r5 + 10176);
    r5 = 0x802A0000u;
    MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 36), r29);
    r29 = r3;
    r5 = (r5 + 16640);
    r6 = (r31 + 64);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r1 + 8), f0.d);
    r8 = (r4 + 5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r1 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r1 + 16), f0.d);
    }
    ctx->lr = 0x8088867Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081F064u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r30 & 255);
    r3 = 0x808E0000u;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 273u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 176u, (r29 + 176), static_cast<uint8_t>(r30));
    r3 = (r3 + -12128);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r29, r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808886F8;
    }
}

loc_80888698:
{
    r5 = (r31 + 0);
    r3 = (r31 + 40);
    r4 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r5, r4);
    r0 = 4;
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 10u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r3, static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r5 + 4), r4);
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r5 + 8), r4);
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r5 + 12), r4);
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r5 + 16), r4);
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r3 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r5 + 20), r4);
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r3 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r5 + 24), r4);
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r3 + 6), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r5 + 28), r4);
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r5 + 32), r4);
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r5 + 36), r4);
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r3 + 9), static_cast<uint8_t>(r0));
}

loc_808886F8:
{
    r5 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 180u, (r29 + 180), r5);
    r4 = 0x808B0000u;
    r3 = 0x808B0000u;
    MemoryInline::WriteResolved32(guest_range_0, 184u, (r29 + 184), r5);
    r0 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 10084));
    r4 = (r31 + 64);
    MemoryInline::WriteResolved32(guest_range_0, 188u, (r29 + 188), r5);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 10056));
    r3 = r29;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 192u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 192u, (r29 + 192), r5);
        MemoryInline::WriteResolved32(guest_range_0, 196u, (r29 + 196), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 200u, (r29 + 200), r5);
        MemoryInline::WriteResolved32(guest_range_0, 204u, (r29 + 204), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 208u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 208u, (r29 + 208), r5);
        MemoryInline::WriteResolved32(guest_range_0, 212u, (r29 + 212), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 216u, (r29 + 216), r5);
    MemoryInline::WriteResolved8(guest_range_0, 220u, (r29 + 220), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 221u, (r29 + 221), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 222u, (r29 + 222), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 223u, (r29 + 223), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 224u, (r29 + 224), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 225u, (r29 + 225), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 226u, (r29 + 226), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 227u, (r29 + 227), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 228u, (r29 + 228), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 229u, (r29 + 229), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 230u, (r29 + 230), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 231u, (r29 + 231), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 236u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 236u, (r29 + 236), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 240u, (r29 + 240), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 244u, (r29 + 244), f1.d);
    MemoryInline::WriteResolved8(guest_range_0, 272u, (r29 + 272), static_cast<uint8_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 248u, (r29 + 248), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 252u, (r29 + 252), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 256u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 256u, (r29 + 256), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 260u, (r29 + 260), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 264u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 264u, (r29 + 264), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 268u, (r29 + 268), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_0, 272u, (r29 + 272), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFF61E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFE00 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80888620 func_80888620 preserves=true fpr_mask=0x00000000
