#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8018EF68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8018EF68;

loc_8018EF68:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -400), 0, 408u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -400), r1);
    r1 = (r1 + -400);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 404u, (r1 + 404), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 384u, (r1 + 384), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 392);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 368u, (r1 + 368), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 376);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 368);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 348u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 348u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_2, 352u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 356u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 356u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_2, 360u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_2, 364u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 96u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r3 + 88));
    r8 = 0x80250000u;
    f31.d = MemoryInline::FlatReadFloat32((r8 + 11264));
    r27 = r3;
    r0 = (r0 & 819);
}

loc_8018EFA0:
{
    r28 = r4;
    f2.d = f31.d;
    r29 = r5;
    r30 = r6;
    r31 = r7;
}

loc_8018EFB8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(768))) {
        goto loc_8018F1A4;
    }
}

loc_8018EFBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8018EFC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8018F1A4;
    }
}

loc_8018EFC4:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 304u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r1 + 40), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r1 + 44), f31.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r1 + 48), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r1 + 52), f31.d);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    MemoryInline::WriteResolved8(guest_range_3, 208u, (r1 + 248), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 209u, (r1 + 249), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    MemoryInline::WriteResolved8(guest_range_3, 210u, (r1 + 250), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 3));
    MemoryInline::WriteResolved8(guest_range_3, 211u, (r1 + 251), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    MemoryInline::WriteResolved8(guest_range_3, 212u, (r1 + 252), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    MemoryInline::WriteResolved8(guest_range_3, 213u, (r1 + 253), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    MemoryInline::WriteResolved8(guest_range_3, 214u, (r1 + 254), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 7));
    MemoryInline::WriteResolved8(guest_range_3, 215u, (r1 + 255), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 8));
    MemoryInline::WriteResolved8(guest_range_3, 216u, (r1 + 256), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r3 + 9));
    MemoryInline::WriteResolved8(guest_range_3, 217u, (r1 + 257), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r3 + 10));
    MemoryInline::WriteResolved8(guest_range_3, 218u, (r1 + 258), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r3 + 11));
    MemoryInline::WriteResolved8(guest_range_3, 219u, (r1 + 259), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 12));
    MemoryInline::WriteResolved8(guest_range_3, 220u, (r1 + 260), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r3 + 13));
    MemoryInline::WriteResolved8(guest_range_3, 221u, (r1 + 261), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r3 + 14));
    MemoryInline::WriteResolved8(guest_range_3, 222u, (r1 + 262), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r3 + 15));
    MemoryInline::WriteResolved8(guest_range_3, 223u, (r1 + 263), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r3 + 16));
    MemoryInline::WriteResolved8(guest_range_3, 224u, (r1 + 264), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r3 + 17));
    MemoryInline::WriteResolved8(guest_range_3, 225u, (r1 + 265), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r3 + 18));
    MemoryInline::WriteResolved8(guest_range_3, 226u, (r1 + 266), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r3 + 19));
    MemoryInline::WriteResolved8(guest_range_3, 227u, (r1 + 267), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r3 + 20));
    MemoryInline::WriteResolved8(guest_range_3, 228u, (r1 + 268), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r3 + 21));
    MemoryInline::WriteResolved8(guest_range_3, 229u, (r1 + 269), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r3 + 22));
    MemoryInline::WriteResolved8(guest_range_3, 230u, (r1 + 270), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r3 + 23));
    MemoryInline::WriteResolved8(guest_range_3, 231u, (r1 + 271), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r3 + 24));
    MemoryInline::WriteResolved8(guest_range_3, 232u, (r1 + 272), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r3 + 25));
    MemoryInline::WriteResolved8(guest_range_3, 233u, (r1 + 273), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 26u, (r3 + 26));
    MemoryInline::WriteResolved8(guest_range_3, 234u, (r1 + 274), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 27u, (r3 + 27));
    MemoryInline::WriteResolved8(guest_range_3, 235u, (r1 + 275), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 28u, (r3 + 28));
    MemoryInline::WriteResolved8(guest_range_3, 236u, (r1 + 276), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 29u, (r3 + 29));
    MemoryInline::WriteResolved8(guest_range_3, 237u, (r1 + 277), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 30u, (r3 + 30));
    MemoryInline::WriteResolved8(guest_range_3, 238u, (r1 + 278), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 31u, (r3 + 31));
    MemoryInline::WriteResolved8(guest_range_3, 239u, (r1 + 279), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 32));
    MemoryInline::WriteResolved32(guest_range_3, 240u, (r1 + 280), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 36u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r3 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r3 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 244u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 244u, (r1 + 284), r4);
        MemoryInline::WriteResolved32(guest_range_3, 248u, (r1 + 288), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 44u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r3 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r3 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 252u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 252u, (r1 + 292), r4);
        MemoryInline::WriteResolved32(guest_range_3, 256u, (r1 + 296), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r3 + 52));
    MemoryInline::WriteResolved32(guest_range_3, 260u, (r1 + 300), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r3 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r3 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 264u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 264u, (r1 + 304), r4);
        MemoryInline::WriteResolved32(guest_range_3, 268u, (r1 + 308), r0);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_0, 64u, (r3 + 64));
    MemoryInline::WriteResolved8(guest_range_3, 272u, (r1 + 312), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 65u, (r3 + 65));
    MemoryInline::WriteResolved8(guest_range_3, 273u, (r1 + 313), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r3 + 66));
    MemoryInline::WriteResolved8(guest_range_3, 274u, (r1 + 314), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 67u, (r3 + 67));
    MemoryInline::WriteResolved8(guest_range_3, 275u, (r1 + 315), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r3 + 68));
    r5 = r30;
    r6 = r31;
    r4 = (r1 + 40);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 276u, (r1 + 316), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r3 + 72));
    MemoryInline::WriteResolved32(guest_range_3, 280u, (r1 + 320), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r3 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 284u, (r1 + 324), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r3 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 288u, (r1 + 328), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r3 + 84));
    MemoryInline::WriteResolved32(guest_range_3, 292u, (r1 + 332), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r3 + 88));
    MemoryInline::WriteResolved32(guest_range_3, 296u, (r1 + 336), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r3 + 92));
    r3 = (r1 + 248);
    MemoryInline::WriteResolved32(guest_range_3, 300u, (r1 + 340), r0);
    ctx->lr = 0x8018F180u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8018E700u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 248);
    r4 = 0;
    ctx->lr = 0x8018F18Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8018B064u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f3.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_8018F1A4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r27, 0, 96u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r27 + 88));
    r0 = (r0 & 48);
}

loc_8018F1B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_8018F1D0;
    }
}

loc_8018F1B4:
{
    r3 = 0x80250000u;
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 11280));
    f1.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    goto loc_8018F1E4;
}

loc_8018F1D0:
{
}

loc_8018F1D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(32))) {
        goto loc_8018F1E4;
    }
}

loc_8018F1D8:
{
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
}

loc_8018F1E4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r27 + 88));
    r0 = (r0 & 768);
}

loc_8018F1F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(256))) {
        goto loc_8018F210;
    }
}

loc_8018F1F4:
{
    r3 = 0x80250000u;
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 11280));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    goto loc_8018F224;
}

loc_8018F210:
{
}

loc_8018F214:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(512))) {
        goto loc_8018F224;
    }
}

loc_8018F218:
{
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32(r29, f0.d);
}

loc_8018F224:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r27 + 88));
    r0 = (r0 & 3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8018F230:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018F440;
    }
}

loc_8018F234:
{
    r3 = 0x80250000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 11264));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 224u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 28), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 36), f1.d);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r27);
    MemoryInline::WriteResolved8(guest_range_4, 128u, (r1 + 152), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r27 + 1));
    MemoryInline::WriteResolved8(guest_range_4, 129u, (r1 + 153), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r27 + 2));
    MemoryInline::WriteResolved8(guest_range_4, 130u, (r1 + 154), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r27 + 3));
    MemoryInline::WriteResolved8(guest_range_4, 131u, (r1 + 155), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r27 + 4));
    MemoryInline::WriteResolved8(guest_range_4, 132u, (r1 + 156), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r27 + 5));
    MemoryInline::WriteResolved8(guest_range_4, 133u, (r1 + 157), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r27 + 6));
    MemoryInline::WriteResolved8(guest_range_4, 134u, (r1 + 158), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r27 + 7));
    MemoryInline::WriteResolved8(guest_range_4, 135u, (r1 + 159), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r27 + 8));
    MemoryInline::WriteResolved8(guest_range_4, 136u, (r1 + 160), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r27 + 9));
    MemoryInline::WriteResolved8(guest_range_4, 137u, (r1 + 161), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r27 + 10));
    MemoryInline::WriteResolved8(guest_range_4, 138u, (r1 + 162), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r27 + 11));
    MemoryInline::WriteResolved8(guest_range_4, 139u, (r1 + 163), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r27 + 12));
    MemoryInline::WriteResolved8(guest_range_4, 140u, (r1 + 164), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r27 + 13));
    MemoryInline::WriteResolved8(guest_range_4, 141u, (r1 + 165), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r27 + 14));
    MemoryInline::WriteResolved8(guest_range_4, 142u, (r1 + 166), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r27 + 15));
    MemoryInline::WriteResolved8(guest_range_4, 143u, (r1 + 167), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 16u, (r27 + 16));
    MemoryInline::WriteResolved8(guest_range_4, 144u, (r1 + 168), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 17u, (r27 + 17));
    MemoryInline::WriteResolved8(guest_range_4, 145u, (r1 + 169), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 18u, (r27 + 18));
    MemoryInline::WriteResolved8(guest_range_4, 146u, (r1 + 170), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 19u, (r27 + 19));
    MemoryInline::WriteResolved8(guest_range_4, 147u, (r1 + 171), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 20u, (r27 + 20));
    MemoryInline::WriteResolved8(guest_range_4, 148u, (r1 + 172), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 21u, (r27 + 21));
    MemoryInline::WriteResolved8(guest_range_4, 149u, (r1 + 173), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 22u, (r27 + 22));
    MemoryInline::WriteResolved8(guest_range_4, 150u, (r1 + 174), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 23u, (r27 + 23));
    MemoryInline::WriteResolved8(guest_range_4, 151u, (r1 + 175), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 24u, (r27 + 24));
    MemoryInline::WriteResolved8(guest_range_4, 152u, (r1 + 176), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 25u, (r27 + 25));
    MemoryInline::WriteResolved8(guest_range_4, 153u, (r1 + 177), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 26u, (r27 + 26));
    MemoryInline::WriteResolved8(guest_range_4, 154u, (r1 + 178), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 27u, (r27 + 27));
    MemoryInline::WriteResolved8(guest_range_4, 155u, (r1 + 179), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 28u, (r27 + 28));
    MemoryInline::WriteResolved8(guest_range_4, 156u, (r1 + 180), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 29u, (r27 + 29));
    MemoryInline::WriteResolved8(guest_range_4, 157u, (r1 + 181), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 30u, (r27 + 30));
    MemoryInline::WriteResolved8(guest_range_4, 158u, (r1 + 182), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 31u, (r27 + 31));
    MemoryInline::WriteResolved8(guest_range_4, 159u, (r1 + 183), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r27 + 32));
    MemoryInline::WriteResolved32(guest_range_4, 160u, (r1 + 184), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 36u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r27 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r27 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_4, 164u, (r1 + 188), r3);
        MemoryInline::WriteResolved32(guest_range_4, 168u, (r1 + 192), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 44u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r27 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r27 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 172u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_4, 172u, (r1 + 196), r3);
        MemoryInline::WriteResolved32(guest_range_4, 176u, (r1 + 200), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r27 + 52));
    MemoryInline::WriteResolved32(guest_range_4, 180u, (r1 + 204), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r27 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r27 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 184u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_4, 184u, (r1 + 208), r3);
        MemoryInline::WriteResolved32(guest_range_4, 188u, (r1 + 212), r0);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_1, 64u, (r27 + 64));
    MemoryInline::WriteResolved8(guest_range_4, 192u, (r1 + 216), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 65u, (r27 + 65));
    MemoryInline::WriteResolved8(guest_range_4, 193u, (r1 + 217), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 66u, (r27 + 66));
    MemoryInline::WriteResolved8(guest_range_4, 194u, (r1 + 218), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 67u, (r27 + 67));
    MemoryInline::WriteResolved8(guest_range_4, 195u, (r1 + 219), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 68u, (r27 + 68));
    f2.d = f1.d;
    r3 = (r1 + 152);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 196u, (r1 + 220), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r27 + 72));
    MemoryInline::WriteResolved32(guest_range_4, 200u, (r1 + 224), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r27 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 204u, (r1 + 228), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r27 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 208u, (r1 + 232), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r27 + 84));
    MemoryInline::WriteResolved32(guest_range_4, 212u, (r1 + 236), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r27 + 88));
    MemoryInline::WriteResolved32(guest_range_4, 216u, (r1 + 240), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 92u, (r27 + 92));
    MemoryInline::WriteResolved32(guest_range_4, 220u, (r1 + 244), r0);
    // inline leaf 0x8018C2F8 (3 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 172u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 172u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 176u, (r3 + 48), f2.d);
    }
    // end of inlined leaf 0x8018C2F8
    r5 = r30;
    r6 = r31;
    r3 = (r1 + 152);
    r4 = (r1 + 24);
    ctx->lr = 0x8018F404u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8018E324u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r3 = (r1 + 152);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r4 = 0;
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->lr = 0x8018F41Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8018B064u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x80250000u;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f30.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 11280));
    r3 = r27;
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    // inline leaf 0x8018C304 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    // end of inlined leaf 0x8018C304
    goto loc_8018F654;
}

loc_8018F440:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8018F444:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018F648;
    }
}

loc_8018F448:
{
    r3 = 0x80250000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 11264));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 144u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, (r1 + 8), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r1 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 16), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 20), f1.d);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r27);
    MemoryInline::WriteResolved8(guest_range_5, 48u, (r1 + 56), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r27 + 1));
    MemoryInline::WriteResolved8(guest_range_5, 49u, (r1 + 57), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r27 + 2));
    MemoryInline::WriteResolved8(guest_range_5, 50u, (r1 + 58), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r27 + 3));
    MemoryInline::WriteResolved8(guest_range_5, 51u, (r1 + 59), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r27 + 4));
    MemoryInline::WriteResolved8(guest_range_5, 52u, (r1 + 60), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r27 + 5));
    MemoryInline::WriteResolved8(guest_range_5, 53u, (r1 + 61), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r27 + 6));
    MemoryInline::WriteResolved8(guest_range_5, 54u, (r1 + 62), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r27 + 7));
    MemoryInline::WriteResolved8(guest_range_5, 55u, (r1 + 63), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r27 + 8));
    MemoryInline::WriteResolved8(guest_range_5, 56u, (r1 + 64), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 9u, (r27 + 9));
    MemoryInline::WriteResolved8(guest_range_5, 57u, (r1 + 65), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r27 + 10));
    MemoryInline::WriteResolved8(guest_range_5, 58u, (r1 + 66), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r27 + 11));
    MemoryInline::WriteResolved8(guest_range_5, 59u, (r1 + 67), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r27 + 12));
    MemoryInline::WriteResolved8(guest_range_5, 60u, (r1 + 68), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r27 + 13));
    MemoryInline::WriteResolved8(guest_range_5, 61u, (r1 + 69), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r27 + 14));
    MemoryInline::WriteResolved8(guest_range_5, 62u, (r1 + 70), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r27 + 15));
    MemoryInline::WriteResolved8(guest_range_5, 63u, (r1 + 71), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 16u, (r27 + 16));
    MemoryInline::WriteResolved8(guest_range_5, 64u, (r1 + 72), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 17u, (r27 + 17));
    MemoryInline::WriteResolved8(guest_range_5, 65u, (r1 + 73), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 18u, (r27 + 18));
    MemoryInline::WriteResolved8(guest_range_5, 66u, (r1 + 74), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 19u, (r27 + 19));
    MemoryInline::WriteResolved8(guest_range_5, 67u, (r1 + 75), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 20u, (r27 + 20));
    MemoryInline::WriteResolved8(guest_range_5, 68u, (r1 + 76), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 21u, (r27 + 21));
    MemoryInline::WriteResolved8(guest_range_5, 69u, (r1 + 77), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 22u, (r27 + 22));
    MemoryInline::WriteResolved8(guest_range_5, 70u, (r1 + 78), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 23u, (r27 + 23));
    MemoryInline::WriteResolved8(guest_range_5, 71u, (r1 + 79), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 24u, (r27 + 24));
    MemoryInline::WriteResolved8(guest_range_5, 72u, (r1 + 80), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 25u, (r27 + 25));
    MemoryInline::WriteResolved8(guest_range_5, 73u, (r1 + 81), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 26u, (r27 + 26));
    MemoryInline::WriteResolved8(guest_range_5, 74u, (r1 + 82), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 27u, (r27 + 27));
    MemoryInline::WriteResolved8(guest_range_5, 75u, (r1 + 83), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 28u, (r27 + 28));
    MemoryInline::WriteResolved8(guest_range_5, 76u, (r1 + 84), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 29u, (r27 + 29));
    MemoryInline::WriteResolved8(guest_range_5, 77u, (r1 + 85), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 30u, (r27 + 30));
    MemoryInline::WriteResolved8(guest_range_5, 78u, (r1 + 86), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 31u, (r27 + 31));
    MemoryInline::WriteResolved8(guest_range_5, 79u, (r1 + 87), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r27 + 32));
    MemoryInline::WriteResolved32(guest_range_5, 80u, (r1 + 88), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 36u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r27 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r27 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 84u, (r1 + 92), r3);
        MemoryInline::WriteResolved32(guest_range_5, 88u, (r1 + 96), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 44u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r27 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r27 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 92u, (r1 + 100), r3);
        MemoryInline::WriteResolved32(guest_range_5, 96u, (r1 + 104), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r27 + 52));
    MemoryInline::WriteResolved32(guest_range_5, 100u, (r1 + 108), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r27 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r27 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 104u, (r1 + 112), r3);
        MemoryInline::WriteResolved32(guest_range_5, 108u, (r1 + 116), r0);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_1, 64u, (r27 + 64));
    MemoryInline::WriteResolved8(guest_range_5, 112u, (r1 + 120), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 65u, (r27 + 65));
    MemoryInline::WriteResolved8(guest_range_5, 113u, (r1 + 121), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 66u, (r27 + 66));
    MemoryInline::WriteResolved8(guest_range_5, 114u, (r1 + 122), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 67u, (r27 + 67));
    MemoryInline::WriteResolved8(guest_range_5, 115u, (r1 + 123), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 68u, (r27 + 68));
    f2.d = f1.d;
    r3 = (r1 + 56);
    MemoryInline::WriteResolvedFloat32(guest_range_5, 116u, (r1 + 124), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r27 + 72));
    MemoryInline::WriteResolved32(guest_range_5, 120u, (r1 + 128), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 76u, (r27 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 124u, (r1 + 132), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 80u, (r27 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 128u, (r1 + 136), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r27 + 84));
    MemoryInline::WriteResolved32(guest_range_5, 132u, (r1 + 140), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r27 + 88));
    MemoryInline::WriteResolved32(guest_range_5, 136u, (r1 + 144), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 92u, (r27 + 92));
    MemoryInline::WriteResolved32(guest_range_5, 140u, (r1 + 148), r0);
    // inline leaf 0x8018C2F8 (3 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 92u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 96u, (r3 + 48), f2.d);
    }
    // end of inlined leaf 0x8018C2F8
    r5 = r30;
    r6 = r31;
    r3 = (r1 + 56);
    r4 = (r1 + 8);
    ctx->lr = 0x8018F618u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8018E324u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r3 = (r1 + 56);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r4 = 0;
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->lr = 0x8018F630u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8018B064u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f30.d));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    r3 = r27;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    // inline leaf 0x8018C304 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    // end of inlined leaf 0x8018C304
    goto loc_8018F654;
}

loc_8018F648:
{
    f1.d = MemoryInline::FlatReadFloat32(r28);
    r3 = r27;
    // inline leaf 0x8018C304 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    // end of inlined leaf 0x8018C304
}

loc_8018F654:
{
    r0 = MemoryInline::FlatRead32((r27 + 88));
    r0 = (r0 & 768);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(768));
}

loc_8018F660:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018F674;
    }
}

loc_8018F664:
{
    f1.d = MemoryInline::FlatReadFloat32(r29);
    r3 = r27;
    // inline leaf 0x8018C30C (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 48), f1.d);
    // end of inlined leaf 0x8018C30C
    goto loc_8018F68C;
}

loc_8018F674:
{
    r3 = r27;
    ctx->lr = 0x8018F67Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8018C148u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32(r29);
    r3 = r27;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    // inline leaf 0x8018C30C (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 48), f1.d);
    // end of inlined leaf 0x8018C30C
}

loc_8018F68C:
{
    f1.d = f31.d;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 348), 0, 60u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 36u, (r1 + 384));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_6, 20u, (r1 + 368));
    r11 = (r1 + 368);
    // inline leaf 0x800215EC (6 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 0u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_6, 0u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_6, 4u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 8u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_6, 8u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_6, 12u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_6, 16u, (r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::ReadResolved32(guest_range_6, 56u, (r1 + 404));
    ctx->lr = r0;
    r1 = (r1 + 400);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8018EF68 func_8018EF68 preserves=false fpr_mask=0xC0000000
