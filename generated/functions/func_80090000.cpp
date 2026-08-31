#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80090000(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f20 = ctx->fpr[20];
    PPC_FPR f21 = ctx->fpr[21];
    PPC_FPR f22 = ctx->fpr[22];
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80090000;

loc_80090000:
{
    r0 = MemoryInline::FlatRead8((r30 + 55));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80090008:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009052C;
    }
}

loc_8009000C:
{
    r7 = 0;
    MemoryInline::FlatWrite8((r30 + 55), static_cast<uint8_t>(r7));
    r0 = MemoryInline::FlatRead8((r13 + -27200));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80090068;
    }
}

loc_80090020:
{
    r6 = 0x802D0000u;
    r4 = 0x80090000u;
    r3 = (r6 + 22648);
    r5 = 0x802D0000u;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r7);
    r8 = (r3 + 8);
    r4 = (r4 + -1552);
    r5 = (r5 + 22632);
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r7);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r6 + 22648), r7);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 8), r8);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r8);
    }
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r3 + 16), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 20), r7);
    // inline leaf 0x80021338 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r13 + -27476));
    MemoryInline::FlatWriteRam32(r5, r0);
    MemoryInline::FlatWriteRam32((r5 + 4), r4);
    MemoryInline::FlatWriteRam32((r5 + 8), r3);
    MemoryInline::FlatWrite32((r13 + -27476), r5);
    // end of inlined leaf 0x80021338
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -27200), static_cast<uint8_t>(r0));
}

loc_80090068:
{
    r31 = 0x802D0000u;
    r4 = (r30 + 244);
    r31 = (r31 + 22648);
    r3 = (r31 + 4);
    // inline leaf 0x800AF370 (12 guest instruction(s))
    r6 = MemoryInline::FlatRead32(r4);
    r0 = 0;
    r5 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r6 + 4), r5);
    MemoryInline::FlatWrite32(r5, r6);
    r5 = MemoryInline::FlatRead32(r3);
    r5 = (r5 + -1);
    MemoryInline::FlatWriteRam32(r3, r5);
    r3 = r6;
    MemoryInline::FlatWrite32(r4, r0);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    // end of inlined leaf 0x800AF370
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80090080:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8009052C;
    }
}

loc_80090084:
{
    r3 = r31;
    r4 = r30;
    ctx->lr = 0x80090090u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80095AF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8009052C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 96), 0, 216u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 192u, (r1 + 288));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 176u, (r1 + 272));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 160u, (r1 + 256));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 144u, (r1 + 240));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 128u, (r1 + 224));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 112u, (r1 + 208));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 96u, (r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 80u, (r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 64u, (r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r1 + 112));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r1 + 108));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r1 + 104));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r1 + 100));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 212u, (r1 + 308));
    r28 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 96));
    ctx->lr = r0;
    r1 = (r1 + 304);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00021FB gpr_write=0xF00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0xFFF00000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80090000 func_80090000 preserves=true fpr_mask=0x00000000
