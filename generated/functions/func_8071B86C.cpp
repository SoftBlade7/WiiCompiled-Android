#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071B86C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8071B86C;

loc_8071B86C:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_5, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_5, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_5, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_5, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_5, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_5, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_5, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r4 = 0x808D0000u;
    r31 = 0x808A0000u;
    r4 = (r4 + -27564);
    MemoryInline::FlatWrite32(r3, r4);
    r30 = r3;
    r31 = (r31 + 8272);
    r3 = 40;
    ctx->lr = 0x8071B8A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8071B8A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071B8B0;
    }
}

loc_8071B8A8:
{
    r4 = 0;
    ctx->lr = 0x8071B8B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8071D5A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8071B8B0:
{
    MemoryInline::FlatWrite32((r30 + 4), r3);
    r3 = 16;
    ctx->lr = 0x8071B8BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8071B8C0:
{
    r29 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071B9F4;
    }
}

loc_8071B8C8:
{
    r26 = MemoryInline::FlatRead32((r30 + 4));
    r4 = 0x808D0000u;
    r4 = (r4 + -27540);
    r28 = 0;
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 4), r28);
    MemoryInline::FlatWriteRam32((r3 + 8), r28);
    MemoryInline::FlatWriteRam8((r3 + 12), static_cast<uint8_t>(r28));
    r3 = 20;
    ctx->lr = 0x8071B8F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8071B8F4:
{
    r27 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071B9B4;
    }
}

loc_8071B8FC:
{
    r4 = 0x808D0000u;
    r4 = (r4 + -27516);
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 12), r26);
    MemoryInline::FlatWriteRam32((r3 + 16), r28);
    r3 = 44;
    ctx->lr = 0x8071B918u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8071B91C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071B95C;
    }
}

loc_8071B920:
{
    r4 = 0x808D0000u;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r4 = (r4 + -27504);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 41u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r28);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r28);
    }
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r28);
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r3 + 40), static_cast<uint8_t>(r28));
}

loc_8071B95C:
{
    MemoryInline::FlatWriteRam32((r27 + 4), r3);
    r3 = 44;
    ctx->lr = 0x8071B968u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8071B96C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071B9B0;
    }
}

loc_8071B970:
{
    r4 = 0x808D0000u;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r4 = (r4 + -27504);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 41u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r4);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 8), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 16), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 20), f0.d);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 24), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 32), r0);
    }
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 36), r0);
    MemoryInline::WriteResolved8(guest_range_1, 40u, (r3 + 40), static_cast<uint8_t>(r0));
}

loc_8071B9B0:
{
    MemoryInline::FlatWriteRam32((r27 + 8), r3);
}

loc_8071B9B4:
{
    MemoryInline::FlatWriteRam32((r29 + 4), r27);
    r3 = 20;
    ctx->lr = 0x8071B9C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8071B9C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071B9F0;
    }
}

loc_8071B9C8:
{
    r5 = MemoryInline::FlatRead32((r29 + 4));
    r4 = 0x808D0000u;
    r4 = (r4 + -27528);
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r4);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r26);
    MemoryInline::FlatWriteRam32((r3 + 8), r5);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f0.d);
}

loc_8071B9F0:
{
    MemoryInline::FlatWriteRam32((r29 + 8), r3);
}

loc_8071B9F4:
{
    MemoryInline::FlatWrite32((r30 + 12), r29);
    r3 = 16;
    ctx->lr = 0x8071BA00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8071BA04:
{
    r27 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071BB3C;
    }
}

loc_8071BA0C:
{
    r26 = MemoryInline::FlatRead32((r30 + 4));
    r4 = 0x808D0000u;
    r4 = (r4 + -27540);
    r28 = 0;
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 4), r28);
    MemoryInline::FlatWriteRam32((r3 + 8), r28);
    MemoryInline::FlatWriteRam8((r3 + 12), static_cast<uint8_t>(r28));
    r3 = 20;
    ctx->lr = 0x8071BA34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8071BA38:
{
    r29 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071BAFC;
    }
}

loc_8071BA40:
{
    r4 = 0x808D0000u;
    r0 = 1;
    r4 = (r4 + -27516);
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 12), r26);
    MemoryInline::FlatWriteRam32((r3 + 16), r0);
    r3 = 44;
    ctx->lr = 0x8071BA60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8071BA64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071BAA4;
    }
}

loc_8071BA68:
{
    r4 = 0x808D0000u;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r4 = (r4 + -27504);
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 41u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, r3, r4);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r3 + 8), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r3 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 16), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 20), f0.d);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r3 + 24), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r3 + 28), r28);
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r3 + 32), r28);
    }
    MemoryInline::WriteResolved32(guest_range_2, 36u, (r3 + 36), r28);
    MemoryInline::WriteResolved8(guest_range_2, 40u, (r3 + 40), static_cast<uint8_t>(r28));
}

loc_8071BAA4:
{
    MemoryInline::FlatWriteRam32((r29 + 4), r3);
    r3 = 44;
    ctx->lr = 0x8071BAB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8071BAB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071BAF8;
    }
}

loc_8071BAB8:
{
    r4 = 0x808D0000u;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r4 = (r4 + -27504);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 41u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, r3, r4);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r3 + 4), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r3 + 8), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r3 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r3 + 16), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r3 + 20), f0.d);
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r3 + 24), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r3 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_3, 32u, (r3 + 32), r0);
    }
    MemoryInline::WriteResolved32(guest_range_3, 36u, (r3 + 36), r0);
    MemoryInline::WriteResolved8(guest_range_3, 40u, (r3 + 40), static_cast<uint8_t>(r0));
}

loc_8071BAF8:
{
    MemoryInline::FlatWriteRam32((r29 + 8), r3);
}

loc_8071BAFC:
{
    MemoryInline::FlatWriteRam32((r27 + 4), r29);
    r3 = 20;
    ctx->lr = 0x8071BB08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8071BB0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071BB38;
    }
}

loc_8071BB10:
{
    r5 = MemoryInline::FlatRead32((r27 + 4));
    r4 = 0x808D0000u;
    r4 = (r4 + -27528);
    r0 = 1;
    MemoryInline::FlatWriteRam32(r3, r4);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r26);
    MemoryInline::FlatWriteRam32((r3 + 8), r5);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f0.d);
}

loc_8071BB38:
{
    MemoryInline::FlatWriteRam32((r27 + 8), r3);
}

loc_8071BB3C:
{
    MemoryInline::FlatWrite32((r30 + 16), r27);
    r3 = 740;
    ctx->lr = 0x8071BB48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8071BB4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071BCFC;
    }
}

loc_8071BB50:
{
    r4 = 0x808D0000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r4 = (r4 + -27552);
    MemoryInline::FlatWriteRam32(r3, r4);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r4 = 0;
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    r0 = 11;
    r6 = r3;
    r5 = 0;
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteRam32((r3 + 16), r4);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    ctr = r0;
}

loc_8071BB88:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r6 + 20), 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r6 + 20), f1.d);
    r5 = (r5 + 16);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r6 + 24), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r6 + 28), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r6 + 32), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 16u, (r6 + 36), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 20u, (r6 + 40), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 24u, (r6 + 44), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 28u, (r6 + 48), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 32u, (r6 + 52), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 36u, (r6 + 56), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 40u, (r6 + 60), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 44u, (r6 + 64), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 48u, (r6 + 68), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 52u, (r6 + 72), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 56u, (r6 + 76), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 60u, (r6 + 80), f1.d);
    r6 = (r6 + 64);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8071BB88;
    }
}

loc_8071BC94:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r4 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
    MemoryInline::FlatWriteFloat32((r4 + 20), f3.d);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 24), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 28), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 32), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    MemoryInline::FlatWriteRam32((r3 + 16), r0);
}

loc_8071BCFC:
{
    MemoryInline::FlatWrite32((r30 + 20), r3);
    r11 = (r1 + 32);
    r3 = r30;
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8071B86C func_8071B86C preserves=true fpr_mask=0x00000000
