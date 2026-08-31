#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000A688(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8000A688;

loc_8000A688:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r7 = 0x80270000u;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32656));
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r5 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32652));
    r7 = (r7 + 3296);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r6 = 1;
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 240));
    MemoryInline::FlatWrite32((r3 + 84), r7);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_8000A6C0:
{
    r0 = 15;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 88), 0, 156u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 88), r6);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 92), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 100), r5);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 104), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 108), r5);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 112), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 116), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 120), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 124), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r3 + 128), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 132), r0);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 136), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 140), r5);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 144), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 148), r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 156), r5);
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 160), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r3 + 168), r5);
    MemoryInline::WriteResolved32(guest_range_0, 88u, (r3 + 176), r5);
    MemoryInline::WriteResolved8(guest_range_0, 92u, (r3 + 180), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 93u, (r3 + 181), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 94u, (r3 + 182), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 95u, (r3 + 183), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r3 + 236), r5);
    MemoryInline::WriteResolved8(guest_range_0, 155u, (r3 + 243), static_cast<uint8_t>(r5));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8000A734;
    }
}

loc_8000A72C:
{
    r0 = 99;
    MemoryInline::FlatWrite8((r3 + 240), static_cast<uint8_t>(r0));
}

loc_8000A734:
{
    r0 = MemoryInline::FlatRead8((r3 + 241));
}

loc_8000A73C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(12))) {
        goto loc_8000A748;
    }
}

loc_8000A740:
{
    r0 = 12;
    MemoryInline::FlatWrite8((r3 + 241), static_cast<uint8_t>(r0));
}

loc_8000A748:
{
    r0 = MemoryInline::FlatRead8((r3 + 242));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
}

loc_8000A750:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8000A75C;
    }
}

loc_8000A754:
{
    r0 = 31;
    MemoryInline::FlatWrite8((r3 + 242), static_cast<uint8_t>(r0));
}

loc_8000A75C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 172), r4);
    r4 = (r3 + 216);
    r5 = 4;
    MemoryInline::FlatWrite8((r3 + 240), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 241), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 242), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 244), static_cast<uint8_t>(r0));
    r3 = (r3 + 184);
    ctx->lr = 0x8000A784u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A72FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x80000000u;
    r3 = 0x80390000u;
    r4 = (r4 + 16384);
    MemoryInline::FlatWrite32((r31 + 156), r4);
    r3 = (r3 + -28292);
    r6 = MemoryInline::FlatRead32((r31 + 172));
    r0 = (r3 - r4);
    MemoryInline::FlatWrite32((r31 + 160), r3);
    r3 = 5;
    r4 = 24;
    MemoryInline::FlatWrite32((r31 + 164), r0);
    r5 = 10240;
    ctx->lr = 0x8000A7B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x802428E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 232), r3);
    r3 = 32;
    r4 = MemoryInline::FlatRead32((r31 + 172));
    r5 = 32;
    ctx->lr = 0x8000A7CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229E04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 136), r3);
    r3 = 32;
    r4 = MemoryInline::FlatRead32((r31 + 172));
    r5 = 32;
    ctx->lr = 0x8000A7E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229E04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 140), r3);
    r3 = 32;
    r4 = MemoryInline::FlatRead32((r31 + 172));
    r5 = 32;
    ctx->lr = 0x8000A7F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229E04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 144), r3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A98B0u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r31 + 236), r3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = (r1 + 8);
    ctx->lr = 0x8000A80Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801AAFA8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r1 + 28));
}

loc_8000A814:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(2000))) {
        goto loc_8000A824;
    }
}

loc_8000A818:
{
    r0 = 2000;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    goto loc_8000A82C;
}

loc_8000A824:
{
    r0 = (r3 + -2000);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
}

loc_8000A82C:
{
    r0 = MemoryInline::FlatRead32((r1 + 28));
}

loc_8000A834:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(99))) {
        goto loc_8000A840;
    }
}

loc_8000A838:
{
    r0 = 99;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
}

loc_8000A840:
{
    r0 = MemoryInline::FlatRead8((r31 + 240));
    r3 = 1;
    r5 = MemoryInline::FlatRead32((r1 + 20));
    r4 = MemoryInline::FlatRead32((r1 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(99));
}

loc_8000A854:
{
    r0 = MemoryInline::FlatRead32((r1 + 28));
    r5 = (r5 & 255);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r31 + 243), static_cast<uint8_t>(r3));
    r4 = (r4 & 255);
    r6 = (r0 & 255);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8000A878;
    }
}

loc_8000A870:
{
    r0 = 99;
    MemoryInline::FlatWrite8((r31 + 240), static_cast<uint8_t>(r0));
}

loc_8000A878:
{
    r0 = MemoryInline::FlatRead8((r31 + 241));
}

loc_8000A880:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(12))) {
        goto loc_8000A88C;
    }
}

loc_8000A884:
{
    r0 = 12;
    MemoryInline::FlatWrite8((r31 + 241), static_cast<uint8_t>(r0));
}

loc_8000A88C:
{
    r0 = MemoryInline::FlatRead8((r31 + 242));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
}

loc_8000A894:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8000A8A0;
    }
}

loc_8000A898:
{
    r0 = 31;
    MemoryInline::FlatWrite8((r31 + 242), static_cast<uint8_t>(r0));
}

loc_8000A8A0:
{
    r0 = 0;
    r3 = 0x80010000u;
    MemoryInline::FlatWrite8((r31 + 240), static_cast<uint8_t>(r6));
    r3 = (r3 + -19980);
    MemoryInline::FlatWrite8((r31 + 241), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 242), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r31 + 181), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 180), static_cast<uint8_t>(r0));
    ctx->lr = 0x8000A8C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x801AB75Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x80010000u;
    r3 = (r3 + -19952);
    ctx->lr = 0x8000A8D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x801AB670u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 183), static_cast<uint8_t>(r0));
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8000A688 func_8000A688 preserves=true fpr_mask=0x00000000
