#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80689300(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8068962C_loc_0 = 0;
    uint32_t addr_lfsx_8068964C_loc_0 = 0;
    uint32_t addr_lfsx_806896EC_loc_0 = 0;
    uint32_t addr_lfsx_8068970C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_8 = 0;
    uint32_t r4_psq_tmp_9 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80689300;

loc_80689300:
{
    MemoryInline::FlatWriteRam32((r1 + -320), r1);
    r1 = (r1 + -320);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 324), r0);
    MemoryInline::FlatWriteRam32((r1 + 316), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + -11336);
    MemoryInline::FlatWriteRam32((r1 + 312), r30);
    r30 = r3;
    r4 = MemoryInline::FlatRead32((r4 + 6216));
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r3 = MemoryInline::FlatRead32((r3 + 108));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x80689340u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    r4 = (r1 + 264);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 4));
    r5 = (r1 + 32);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 280u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 236u, (r1 + 268), r0);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 48));
    MemoryInline::WriteResolved32(guest_range_1, 232u, (r1 + 264), r6);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 52));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r3 + 12));
        }
    }
    MemoryInline::WriteResolved32(guest_range_1, 244u, (r1 + 276), r0);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    MemoryInline::WriteResolved32(guest_range_1, 240u, (r1 + 272), r6);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r3 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r3 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 248u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 252u, (r1 + 284), r0);
        MemoryInline::WriteResolved32(guest_range_1, 248u, (r1 + 280), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r3 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 256u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 260u, (r1 + 292), r0);
        MemoryInline::WriteResolved32(guest_range_1, 256u, (r1 + 288), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 32));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r3 + 36));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 264u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 268u, (r1 + 300), r0);
        MemoryInline::WriteResolved32(guest_range_1, 264u, (r1 + 296), r6);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r3 + 40));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r3 + 44));
        }
    }
    r3 = (r1 + 44);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 272u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 276u, (r1 + 308), r0);
        MemoryInline::WriteResolved32(guest_range_1, 272u, (r1 + 304), r6);
    }
    f3.d = MemoryInline::FlatReadFloat32((r30 + 56));
    f4.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f5.d = MemoryInline::FlatReadFloat32((r30 + 48));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f5.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 40), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r1 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r1 + 36), f1.d);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    r6 = (r31 + 40);
    r8 = MemoryInline::FlatRead8((r31 + 40));
    r7 = MemoryInline::FlatRead8((r6 + 1));
    r3 = (r1 + 200);
    r5 = MemoryInline::FlatRead8((r6 + 2));
    r4 = (r1 + 16);
    r0 = MemoryInline::FlatRead8((r6 + 3));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    // inline leaf 0x80170314 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    // end of inlined leaf 0x80170314
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r3 = (r1 + 200);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 52));
    // inline leaf 0x80170198 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32((r3 + 40), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 48), f3.d);
    // end of inlined leaf 0x80170198
    r3 = (r1 + 200);
    r4 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80170320u>(ctx);
    r3 = 4;
    r4 = 1;
    r5 = 0;
    r6 = 0;
    r7 = 1;
    r8 = 2;
    r9 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x80170570u>(ctx);
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8017054Cu>(ctx);
    r3 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8016F3B8u>(ctx);
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8016E5A4u>(ctx);
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801722A8u>(ctx);
    r3 = 0;
    r4 = 255;
    r5 = 255;
    r6 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8017214Cu>(ctx);
    r3 = 0;
    r4 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171C4Cu>(ctx);
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x8016DC34u>(ctx);
    r3 = 9;
    r4 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8016D3A4u>(ctx);
    r3 = 10;
    r4 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8016D3A4u>(ctx);
    r3 = 0;
    r4 = 9;
    r5 = 1;
    r6 = 4;
    r7 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8016DC68u>(ctx);
    r3 = 0;
    r4 = 10;
    r5 = 0;
    r6 = 4;
    r7 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8016DC68u>(ctx);
    r3 = 1;
    r4 = 3;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80172824u>(ctx);
    r3 = 1;
    r4 = 4;
    r5 = 5;
    r6 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8017277Cu>(ctx);
    r0 = MemoryInline::FlatRead8((r30 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80689508:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80689514;
    }
}

loc_8068950C:
{
    r5 = (r30 + 72);
    goto loc_80689544;
}

loc_80689514:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 20);
    r4 = (r30 + 88);
    ctx->lr = 0x80689528u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r5 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_80689544:
{
    r3 = (r1 + 152);
    r4 = (r30 + 60);
    r6 = (r30 + 48);
    ctx->lr = 0x80689554u;
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
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022FC34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    cr = ctx->cr;
    r3 = (r1 + 264);
    r4 = (r1 + 152);
    r5 = (r1 + 104);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    InvokeDirectCpu<0x80199D64u>(ctx);
    r1 = ctx->gpr[1];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f13 = ctx->fpr[13];
    r3 = (r1 + 104);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8017310Cu>(ctx);
    r3 = (r1 + 104);
    r4 = (r1 + 56);
    // inline leaf 0x8019A0C0 (50 guest instruction(s))
}

loc_inl2_0x8019A0C0:
{
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_0 = (r3 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_0));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 16);
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_1));
    PpcSetPairedFprInline(f6, PPC_PsMerge10Inline(f1.d, f0.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 20);
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_2));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 32);
    PpcSetPairedFprInline(f4, PPC_PsqLStackInline<1u, 0u>(ctx, r3_psq_tmp_3));
    PpcSetPairedFprInline(f7, PPC_PsMerge10Inline(f3.d, f2.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 36);
    PpcSetPairedFprInline(f5, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_4));
    PpcSetPairedFprInline(f11, PPC_PsMulInline(f3.d, f6.d));
    PpcSetPairedFprInline(f8, PPC_PsMerge10Inline(f5.d, f4.d));
    PpcSetPairedFprInline(f13, PPC_PsMulInline(f5.d, f7.d));
    PpcSetPairedFprInline(f11, PPC_PsMsubInline(f1.d, f7.d, f11.d));
    PpcSetPairedFprInline(f12, PPC_PsMulInline(f1.d, f8.d));
    PpcSetPairedFprInline(f13, PPC_PsMsubInline(f3.d, f8.d, f13.d));
    PpcSetPairedFprInline(f12, PPC_PsMsubInline(f5.d, f6.d, f12.d));
    PpcSetPairedFprInline(f10, PPC_PsMulInline(f3.d, f4.d));
    PpcSetPairedFprInline(f9, PPC_PsMulInline(f0.d, f5.d));
    PpcSetPairedFprInline(f8, PPC_PsMulInline(f1.d, f2.d));
    PpcSetPairedFprInline(f10, PPC_PsMsubInline(f2.d, f5.d, f10.d));
    PpcSetPairedFprInline(f9, PPC_PsMsubInline(f1.d, f4.d, f9.d));
    PpcSetPairedFprInline(f8, PPC_PsMsubInline(f0.d, f3.d, f8.d));
    PpcSetPairedFprInline(f7, PPC_PsMulInline(f0.d, f13.d));
    PpcSetPairedFprInline(f1, PPC_PsSubInline(f1.d, f1.d));
    PpcSetPairedFprInline(f7, PPC_PsMaddInline(f2.d, f12.d, f7.d));
    PpcSetPairedFprInline(f7, PPC_PsMaddInline(f4.d, f11.d, f7.d));
    SetCRFloatResident(cr, static_cast<uint32_t>(0) & 7u, PpcGetPs0Inline(f7.d), PpcGetPs0Inline(f1.d));
}

loc_inl2_0x8019A128:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_0x8019A134;
    }
}

loc_inl2_0x8019A12C:
{
    r3 = 0;
    goto loc_inl2_cont_8019A0C0;
}

loc_inl2_0x8019A134:
{
    PpcSetPairedFprInline(f0, PPC_Fres(f7.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_1 = (r4 + 12);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_1, f1.d);
    PpcSetPairedFprInline(f6, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f5, PPC_PsMulInline(f0.d, f0.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_2 = (r4 + 28);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_2, f1.d);
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(f7.d, f5.d, f6.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_3 = (r4 + 44);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_3, f1.d);
    PpcSetPairedFprInline(f13, PPC_PsMuls0Inline(f13.d, f0.d));
    PpcSetPairedFprInline(f12, PPC_PsMuls0Inline(f12.d, f0.d));
    PpcSetPairedFprInline(f11, PPC_PsMuls0Inline(f11.d, f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r4, f13.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_4 = (r4 + 16);
    PPC_PsqStStackInline<0u, 0u>(ctx, r4_psq_tmp_4, f12.d);
    PpcSetPairedFprInline(f10, PPC_PsMuls0Inline(f10.d, f0.d));
    PpcSetPairedFprInline(f9, PPC_PsMuls0Inline(f9.d, f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_5 = (r4 + 32);
    PPC_PsqStStackInline<0u, 0u>(ctx, r4_psq_tmp_5, f11.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_6 = (r4 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_6, f10.d);
    PpcSetPairedFprInline(f8, PPC_PsMuls0Inline(f8.d, f0.d));
    r3 = 1;
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_7 = (r4 + 24);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_7, f9.d);
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r4_psq_tmp_8 = (r4 + 40);
    PPC_PsqStStackInline<1u, 0u>(ctx, r4_psq_tmp_8, f8.d);
}

loc_inl2_cont_8019A0C0:
{
    // end of inlined leaf 0x8019A0C0
    r3 = (r1 + 56);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80173188u>(ctx);
    r0 = MemoryInline::FlatRead8((r30 + 220));
    r4 = (r1 + 12);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r3 = 4;
    r0 = MemoryInline::FlatRead8((r30 + 221));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 222));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 223));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80170474u>(ctx);
    r6 = (r31 + 44);
    r8 = MemoryInline::FlatRead8((r31 + 44));
    r7 = MemoryInline::FlatRead8((r6 + 1));
    r4 = (r1 + 8);
    r5 = MemoryInline::FlatRead8((r6 + 2));
    r3 = 4;
    r0 = MemoryInline::FlatRead8((r6 + 3));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8017039Cu>(ctx);
    r3 = 1;
    r4 = 3;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80172824u>(ctx);
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80172858u>(ctx);
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80172930u>(ctx);
    r3 = 144;
    r4 = 0;
    r5 = 18;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    r0 = 3;
    r4 = 0;
    r3 = -872349696;
    ctr = r0;
}

loc_80689624:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r30 + 172), 0, 20u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r30 + 172));
    r5 = (r0 + r4);
    addr_lfsx_8068962C_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8068962C_loc_0);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r30 + 188));
    r5 = (r0 + r4);
    addr_lfsx_8068964C_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8068964C_loc_0);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r30 + 172));
    r5 = (r0 + r4);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 60));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r30 + 188));
    r5 = (r0 + r4);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 60));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r30 + 172));
    r5 = (r0 + r4);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 48));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r30 + 188));
    r5 = (r0 + r4);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 48));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r30 + 172));
    r5 = (r0 + r4);
    addr_lfsx_806896EC_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_806896EC_loc_0);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r30 + 188));
    r5 = (r0 + r4);
    addr_lfsx_8068970C_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8068970C_loc_0);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r30 + 172));
    r5 = (r0 + r4);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 12));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r30 + 188));
    r5 = (r0 + r4);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 12));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r30 + 172));
    r5 = (r0 + r4);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 60));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r30 + 188));
    r5 = (r0 + r4);
    r4 = (r4 + 12);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 60));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80689624;
    }
}

loc_806897AC:
{
    r3 = 144;
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8016F0F0u>(ctx);
    guest_range_3 = MemoryInline::ResolveRangeHost((r30 + 172), 0, 20u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r30 + 172));
    r3 = -872349696;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 36));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r30 + 188));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 36));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r30 + 172));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 48));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r30 + 188));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 48));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r30 + 172));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 92));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 84));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r30 + 188));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 92));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 84));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r30 + 172));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 36));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r30 + 188));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 36));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r30 + 172));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r30 + 188));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r30 + 172));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 48));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r30 + 188));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 48));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r30 + 172));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 48));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r30 + 188));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 48));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r30 + 172));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 80));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 72));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r30 + 188));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 80));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 72));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r30 + 172));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 92));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 84));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r30 + 188));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 92));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 88));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 84));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r30 + 172));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 48));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r30 + 188));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 48));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r30 + 172));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 60));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r30 + 188));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 60));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r30 + 172));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 80));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 72));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r4 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r30 + 188));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 80));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 72));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f0.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    r0 = MemoryInline::FlatRead32((r1 + 324));
    r31 = MemoryInline::FlatRead32((r1 + 316));
    r30 = MemoryInline::FlatRead32((r1 + 312));
    ctx->lr = r0;
    r1 = (r1 + 320);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80689300 func_80689300 preserves=true fpr_mask=0x00000000
