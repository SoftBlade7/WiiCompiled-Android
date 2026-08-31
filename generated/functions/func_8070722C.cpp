#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8070722C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8070722C;

loc_8070722C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x808A0000u;
    r30 = (r30 + 5856);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r5 = MemoryInline::FlatRead32((r4 + 10392));
    r4 = MemoryInline::FlatRead32((r5 + 1468));
    r5 = (r5 + 1724);
    ctx->lr = 0x80707264u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x802104ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x808C0000u;
    r4 = 0x80700000u;
    r3 = (r3 + 32672);
    r5 = 0x806F0000u;
    r0 = (r3 + 28);
    MemoryInline::FlatWrite32(r29, r3);
    r3 = (r29 + 128);
    r4 = (r4 + -30488);
    MemoryInline::FlatWrite32((r29 + 84), r0);
    r5 = (r5 + 30592);
    r6 = 4;
    r7 = 4;
    ctx->lr = 0x80707298u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80020FF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 4;
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 252u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 144u, (r29 + 144), r0);
    r3 = (r29 + 148);
    // inline leaf 0x80702678 (21 guest instruction(s))
    r5 = 0x808D0000u;
    r4 = 65536;
    r6 = 0;
    r0 = 8;
    r5 = (r5 + -32736);
    r4 = (r4 + -1);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 30u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r5);
    r5 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r6);
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r3 + 8), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r3 + 10), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r3 + 11), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 12), r0);
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r3 + 28), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 29u, (r3 + 29), static_cast<uint8_t>(r6));
    r0 = MemoryInline::FlatRead16((r5 + 9888));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r5 + 9888));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam16((r5 + 9888), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80702678
    r6 = 0x808D0000u;
    r4 = 0;
    r6 = (r6 + -30424);
    f0.d = MemoryInline::FlatReadFloat32(r30);
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 0u, r29, r6);
    r3 = (r6 + 28);
    r5 = (r6 + 124);
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r29 + 84), r3);
    r3 = 88;
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r29 + 148), r5);
    MemoryInline::WriteResolved8(guest_range_0, 180u, (r29 + 180), static_cast<uint8_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 188u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 188u, (r29 + 188), r4);
        MemoryInline::WriteResolved32(guest_range_0, 192u, (r29 + 192), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 196u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 196u, (r29 + 196), r4);
        MemoryInline::WriteResolved32(guest_range_0, 200u, (r29 + 200), r4);
    }
    MemoryInline::WriteResolved16(guest_range_0, 208u, (r29 + 208), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 211u, (r29 + 211), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 212u, (r29 + 212), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 213u, (r29 + 213), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved16(guest_range_0, 214u, (r29 + 214), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 216u, (r29 + 216), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 217u, (r29 + 217), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 218u, (r29 + 218), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 219u, (r29 + 219), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 236u, (r29 + 236), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 244u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 244u, (r29 + 244), r4);
        MemoryInline::WriteResolved32(guest_range_0, 248u, (r29 + 248), r4);
    }
    ctx->lr = 0x8070731Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80707320:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070733C;
    }
}

loc_80707328:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 72));
    r3 = (r3 + 48);
    f2.d = MemoryInline::FlatReadFloat32(r30);
    f3.d = MemoryInline::FlatReadFloat32((r30 + 76));
    // inline leaf 0x80717D70 (5 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f2.d);
    // end of inlined leaf 0x80717D70
}

loc_8070733C:
{
    MemoryInline::FlatWrite32((r29 + 184), r31);
    r3 = r29;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFCE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8070722C func_8070722C preserves=true fpr_mask=0x00000000
