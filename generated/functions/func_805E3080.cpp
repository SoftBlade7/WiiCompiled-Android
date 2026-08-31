#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E3080(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_805E3080;

loc_805E3080:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 36), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r1 + 8), r26);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r1 + 12), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 16), r28);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r1 + 20), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 24), r30);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 28), r31);
    }
    r27 = 0;
    r28 = 2;
    r29 = 4;
    r26 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 95u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r27);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r28);
    }
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r27);
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r3 + 12), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r3 + 13), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r3 + 14), static_cast<uint8_t>(r27));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r28);
    }
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r27);
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r3 + 28), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r3 + 29), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r3 + 30), static_cast<uint8_t>(r27));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r27);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r28);
    }
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r27);
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r3 + 44), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 45u, (r3 + 45), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_0, 46u, (r3 + 46), static_cast<uint8_t>(r27));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 48), r27);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 52), r28);
    }
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r27);
    MemoryInline::WriteResolved8(guest_range_0, 60u, (r3 + 60), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 61u, (r3 + 61), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_0, 62u, (r3 + 62), static_cast<uint8_t>(r27));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 64), r27);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r3 + 68), r28);
    }
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r3 + 72), r27);
    MemoryInline::WriteResolved8(guest_range_0, 76u, (r3 + 76), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 77u, (r3 + 77), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_0, 78u, (r3 + 78), static_cast<uint8_t>(r27));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r3 + 80), r27);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r3 + 84), r28);
    }
    MemoryInline::WriteResolved32(guest_range_0, 88u, (r3 + 88), r27);
    MemoryInline::WriteResolved8(guest_range_0, 92u, (r3 + 92), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_0, 93u, (r3 + 93), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_0, 94u, (r3 + 94), static_cast<uint8_t>(r27));
    r3 = (r3 + 392);
    ctx->lr = 0x805E3138u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x805FA370u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r30 = -1;
    MemoryInline::FlatWrite32((r26 + 544), r30);
    r3 = (r26 + 568);
    MemoryInline::FlatWrite32((r26 + 548), r30);
    MemoryInline::FlatWrite32((r26 + 556), r30);
    MemoryInline::FlatWrite32((r26 + 560), r30);
    ctx->lr = 0x805E3154u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x805FA370u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r3 = (r26 + 720);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x805E3BA8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r3 = 8;
    r31 = 1;
    r0 = 3;
    guest_range_1 = MemoryInline::ResolveRangeHost((r26 + 956), 0, 301u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r26 + 956), r3);
    r3 = (r26 + 1264);
    r4 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r26 + 960), r28);
    r5 = 8;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r26 + 964), r27);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r26 + 968), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r26 + 972), r30);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 252u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 256u, (r26 + 1212), r27);
        MemoryInline::WriteResolved32(guest_range_1, 252u, (r26 + 1208), r27);
    }
    MemoryInline::WriteResolved8(guest_range_1, 260u, (r26 + 1216), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 261u, (r26 + 1217), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 262u, (r26 + 1218), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_1, 263u, (r26 + 1219), static_cast<uint8_t>(r27));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 264u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 264u, (r26 + 1220), r27);
        MemoryInline::WriteResolved32(guest_range_1, 268u, (r26 + 1224), r30);
    }
    MemoryInline::WriteResolved8(guest_range_1, 272u, (r26 + 1228), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 276u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 276u, (r26 + 1232), r29);
        MemoryInline::WriteResolved32(guest_range_1, 280u, (r26 + 1236), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 284u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 284u, (r26 + 1240), r27);
        MemoryInline::WriteResolved32(guest_range_1, 288u, (r26 + 1244), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 292u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 292u, (r26 + 1248), r30);
        MemoryInline::WriteResolved32(guest_range_1, 296u, (r26 + 1252), r30);
    }
    MemoryInline::WriteResolved8(guest_range_1, 300u, (r26 + 1256), static_cast<uint8_t>(r27));
    ctx->lr = 0x805E31CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    r3 = (r26 + 1272);
    r4 = 0;
    r5 = 8;
    ctx->lr = 0x805E31DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    guest_range_2 = MemoryInline::ResolveRangeHost((r26 + 96), 0, 1196u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 1184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 1184u, (r26 + 1280), r27);
        MemoryInline::WriteResolved32(guest_range_2, 1188u, (r26 + 1284), r27);
    }
    MemoryInline::WriteResolved32(guest_range_2, 1192u, (r26 + 1288), r30);
    MemoryInline::WriteResolved8(guest_range_2, 880u, (r26 + 976), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved8(guest_range_2, 888u, (r26 + 984), static_cast<uint8_t>(r27));
    MemoryInline::WriteResolved32(guest_range_2, 884u, (r26 + 980), r27);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r26 + 96), r27);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r26 + 100), r29);
    }
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r26 + 116), r28);
    MemoryInline::WriteResolved32(guest_range_2, 196u, (r26 + 292), r31);
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r26 + 112), r28);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r26 + 104), r27);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r26 + 108), r27);
    }
    r26 = MemoryInline::FlatRead32((r1 + 8));
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805E3080 func_805E3080 preserves=true fpr_mask=0x00000000
