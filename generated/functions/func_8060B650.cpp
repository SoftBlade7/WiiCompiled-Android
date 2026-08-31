#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_8060B650(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8060B650;

loc_8060B650:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -272), 0, 280u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 276u, (r1 + 276), r0);
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 240u, (r1 + 240), r24);
        MemoryInline::WriteResolved32(guest_range_0, 244u, (r1 + 244), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 248u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 248u, (r1 + 248), r26);
        MemoryInline::WriteResolved32(guest_range_0, 252u, (r1 + 252), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 256u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 256u, (r1 + 256), r28);
        MemoryInline::WriteResolved32(guest_range_0, 260u, (r1 + 260), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 264u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 264u, (r1 + 264), r30);
        MemoryInline::WriteResolved32(guest_range_0, 268u, (r1 + 268), r31);
    }
    r26 = r4;
    r29 = 0x809C0000u;
    r31 = r3;
    r25 = r5;
    r24 = r6;
    r4 = (r1 + 8);
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r1 + 8), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r29 + 8516));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r0);
    ctx->lr = 0x8060B68Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 36);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_E0C = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_E0C[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_E0C[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x805CD94Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r3 = 6602;
    MemoryInline::FlatWriteRam32((r1 + 72), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(r0));
}

loc_8060B6A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060B6B4;
    }
}

loc_8060B6A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 192), r0);
    goto loc_8060B6C4;
}

loc_8060B6B4:
{
    r3 = MemoryInline::FlatRead32((r29 + 8516));
    r4 = r26;
    ctx->lr = 0x8060B6C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8066C390u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 192), r3);
}

loc_8060B6C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(1));
}

loc_8060B6C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8060B6D8;
    }
}

loc_8060B6CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(2));
}

loc_8060B6D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8060B6EC;
    }
}

loc_8060B6D4:
{
    goto loc_8060B6FC;
}

loc_8060B6D8:
{
    r3 = (r31 + 1268);
    r5 = (r1 + 36);
    r4 = 6006;
    ctx->lr = 0x8060B6E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8060B6FC;
}

loc_8060B6EC:
{
    r3 = (r31 + 1268);
    r5 = (r1 + 36);
    r4 = 6007;
    ctx->lr = 0x8060B6FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8060B6FC:
{
    r29 = 0;
    MemoryInline::FlatWrite32((r31 + 5812), r29);
    r26 = r31;
    r28 = (r24 + 4);
    r27 = (r31 + 1640);
    r25 = 0;
    r30 = 1;
}

loc_8060B718:
{
    r0 = MemoryInline::FlatRead32(r24);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(r0));
}

loc_8060B720:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8060B748;
    }
}

loc_8060B724:
{
    r3 = r27;
    r4 = r28;
    ctx->lr = 0x8060B730u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8060A928u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r26 + 1768), static_cast<uint8_t>(r29));
    r3 = r27;
    r4 = 55;
    r5 = 56;
    // inline leaf 0x8063D3A4 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 144), r4);
    MemoryInline::FlatWrite32((r3 + 148), r5);
    // end of inlined leaf 0x8063D3A4
    goto loc_8060B75C;
}

loc_8060B748:
{
    MemoryInline::FlatWrite8((r26 + 1768), static_cast<uint8_t>(r30));
    r3 = r27;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x8063D3A4 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 144), r4);
    MemoryInline::FlatWrite32((r3 + 148), r5);
    // end of inlined leaf 0x8063D3A4
}

loc_8060B75C:
{
    r25 = (r25 + 1);
    r27 = (r27 + 380);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(10));
}

loc_8060B768:
{
    r26 = (r26 + 380);
    r28 = (r28 + 104);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8060B718;
    }
}

loc_8060B774:
{
    r3 = MemoryInline::FlatRead32(r24);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWrite8((r31 + 5568), static_cast<uint8_t>(r0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 240), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 240));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 244));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 248));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 252));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 256));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 260));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 264));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 268));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8060B650 func_8060B650 preserves=true fpr_mask=0x00000000
