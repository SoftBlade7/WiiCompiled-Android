#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073B0F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8073B0F8;

loc_8073B0F8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x808A0000u;
    r4 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r6 = 0x808D0000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 10160));
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r0 = 2;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10164));
    r6 = (r6 + -20452);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r6);
    r31 = r3;
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r5);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r5);
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r3 + 28), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r3 + 32), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r3 + 33), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 34u, (r3 + 34), static_cast<uint8_t>(r5));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r0);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 48), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 52), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r3 + 56), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 60), f0.d);
    // inline leaf 0x80739714 (11 guest instruction(s))
}

loc_inl0_0x80739714:
{
    r4 = 0x809C0000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r4 = MemoryInline::FlatRead32((r4 + 2928));
    r0 = (r4 + -9);
}

loc_inl0_0x8073972C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl0_0x80739738;
    }
}

loc_inl0_0x80739730:
{
}

loc_inl0_0x80739734:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80739738:
{
    r3 = 1;
    goto loc_inl0_cont_80739714;
}

loc_inl0_return:
{
}

loc_inl0_cont_80739714:
{
    // end of inlined leaf 0x80739714
}

loc_8073B17C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8073B2B8;
    }
}

loc_8073B180:
{
    // inline leaf 0x80739760 (6 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2936));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x80739760
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073B188:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073B1A8;
    }
}

loc_8073B18C:
{
    r3 = 68;
    ctx->lr = 0x8073B194u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073B198:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073B1A0;
    }
}

loc_8073B19C:
{
    ctx->lr = 0x8073B1A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8073DBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
}

loc_8073B1A0:
{
    MemoryInline::FlatWrite32((r31 + 20), r3);
    goto loc_8073B1E8;
}

loc_8073B1A8:
{
    // inline leaf 0x80739778 (7 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = MemoryInline::FlatRead32((r3 + 2936));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x80739778
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073B1B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073B1D0;
    }
}

loc_8073B1B4:
{
    r3 = 68;
    ctx->lr = 0x8073B1BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073B1C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073B1C8;
    }
}

loc_8073B1C4:
{
    ctx->lr = 0x8073B1C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8073E8A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
}

loc_8073B1C8:
{
    MemoryInline::FlatWrite32((r31 + 20), r3);
    goto loc_8073B1E8;
}

loc_8073B1D0:
{
    r3 = 68;
    ctx->lr = 0x8073B1D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073B1DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073B1E4;
    }
}

loc_8073B1E0:
{
    ctx->lr = 0x8073B1E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8073DBF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
}

loc_8073B1E4:
{
    MemoryInline::FlatWrite32((r31 + 20), r3);
}

loc_8073B1E8:
{
    r3 = 20;
    ctx->lr = 0x8073B1F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073B1F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073B220;
    }
}

loc_8073B1F8:
{
    r5 = 0x808D0000u;
    r4 = 0x808A0000u;
    r5 = (r5 + -20172);
    MemoryInline::FlatWriteRam32(r3, r5);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10164));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    MemoryInline::FlatWriteRam8((r3 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f0.d);
}

loc_8073B220:
{
    MemoryInline::FlatWrite32((r31 + 8), r3);
    r3 = 20;
    ctx->lr = 0x8073B22Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073B230:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073B268;
    }
}

loc_8073B234:
{
    r4 = 0x808D0000u;
    r5 = 0x808A0000u;
    r4 = (r4 + -20172);
    MemoryInline::FlatWriteRam32(r3, r4);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 10164));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r4 = 0x808D0000u;
    r4 = (r4 + -20240);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    MemoryInline::FlatWriteRam8((r3 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f0.d);
    MemoryInline::FlatWriteRam32(r3, r4);
}

loc_8073B268:
{
    MemoryInline::FlatWrite32((r31 + 12), r3);
    r3 = 20;
    ctx->lr = 0x8073B274u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073B278:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073B2B0;
    }
}

loc_8073B27C:
{
    r4 = 0x808D0000u;
    r5 = 0x808A0000u;
    r4 = (r4 + -20172);
    MemoryInline::FlatWriteRam32(r3, r4);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 10164));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r4 = 0x808D0000u;
    r4 = (r4 + -20240);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    MemoryInline::FlatWriteRam8((r3 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f0.d);
    MemoryInline::FlatWriteRam32(r3, r4);
}

loc_8073B2B0:
{
    MemoryInline::FlatWrite32((r31 + 16), r3);
    goto loc_8073B484;
}

loc_8073B2B8:
{
    // inline leaf 0x80739880 (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x80739880
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073B2C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8073B2D0;
    }
}

loc_8073B2C4:
{
    // inline leaf 0x80739888 (9 guest instruction(s))
}

loc_inl4_0x80739888:
{
    r4 = 0x809C0000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r4 = MemoryInline::FlatRead32((r4 + 2928));
    r0 = (r4 + -11);
}

loc_inl4_0x807398A0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x807398A4:
{
    r3 = 1;
    goto loc_inl4_cont_80739888;
}

loc_inl4_return:
{
}

loc_inl4_cont_80739888:
{
    // end of inlined leaf 0x80739888
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073B2CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073B3B8;
    }
}

loc_8073B2D0:
{
    r3 = 52;
    ctx->lr = 0x8073B2D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073B2DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073B2E4;
    }
}

loc_8073B2E0:
{
    // inline leaf 0x8073C54C (27 guest instruction(s))
    r4 = 0x808A0000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10400));
    r4 = 0x808D0000u;
    r4 = (r4 + -20048);
    r5 = 0x80890000u;
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 52u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r4);
    r4 = 0x808D0000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -1504));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 16), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 36), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 44), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r3 + 48), r0);
    MemoryInline::FlatWriteRamFloat32((r4 + -20412), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 28), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 24), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 20), f0.d);
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r3 + 9), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r3 + 10), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r3 + 11), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r3 + 12), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r3 + 13), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8073C54C
}

loc_8073B2E4:
{
    MemoryInline::FlatWrite32((r31 + 20), r3);
    r3 = 20;
    ctx->lr = 0x8073B2F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073B2F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073B320;
    }
}

loc_8073B2F8:
{
    r5 = 0x808D0000u;
    r4 = 0x808A0000u;
    r5 = (r5 + -20172);
    MemoryInline::FlatWriteRam32(r3, r5);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10164));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    MemoryInline::FlatWriteRam8((r3 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f0.d);
}

loc_8073B320:
{
    MemoryInline::FlatWrite32((r31 + 8), r3);
    r3 = 20;
    ctx->lr = 0x8073B32Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073B330:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073B368;
    }
}

loc_8073B334:
{
    r4 = 0x808D0000u;
    r5 = 0x808A0000u;
    r4 = (r4 + -20172);
    MemoryInline::FlatWriteRam32(r3, r4);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 10164));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r4 = 0x808D0000u;
    r4 = (r4 + -20308);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    MemoryInline::FlatWriteRam8((r3 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f0.d);
    MemoryInline::FlatWriteRam32(r3, r4);
}

loc_8073B368:
{
    MemoryInline::FlatWrite32((r31 + 12), r3);
    r3 = 20;
    ctx->lr = 0x8073B374u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073B378:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073B3B0;
    }
}

loc_8073B37C:
{
    r4 = 0x808D0000u;
    r5 = 0x808A0000u;
    r4 = (r4 + -20172);
    MemoryInline::FlatWriteRam32(r3, r4);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 10164));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r4 = 0x808D0000u;
    r4 = (r4 + -20308);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    MemoryInline::FlatWriteRam8((r3 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f0.d);
    MemoryInline::FlatWriteRam32(r3, r4);
}

loc_8073B3B0:
{
    MemoryInline::FlatWrite32((r31 + 16), r3);
    goto loc_8073B484;
}

loc_8073B3B8:
{
    r3 = 52;
    ctx->lr = 0x8073B3C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073B3C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073B3CC;
    }
}

loc_8073B3C8:
{
    // inline leaf 0x8073C54C (27 guest instruction(s))
    r4 = 0x808A0000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10400));
    r4 = 0x808D0000u;
    r4 = (r4 + -20048);
    r5 = 0x80890000u;
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 52u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, r3, r4);
    r4 = 0x808D0000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + -1504));
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 4), r0);
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r3 + 16), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r3 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r3 + 36), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r3 + 40), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r3 + 44), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_2, 48u, (r3 + 48), r0);
    MemoryInline::FlatWriteRamFloat32((r4 + -20412), f1.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 28), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 24), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 20), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r3 + 9), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r3 + 10), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 11u, (r3 + 11), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 12u, (r3 + 12), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 13u, (r3 + 13), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8073C54C
}

loc_8073B3CC:
{
    MemoryInline::FlatWrite32((r31 + 20), r3);
    r3 = 20;
    ctx->lr = 0x8073B3D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073B3DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073B408;
    }
}

loc_8073B3E0:
{
    r5 = 0x808D0000u;
    r4 = 0x808A0000u;
    r5 = (r5 + -20172);
    MemoryInline::FlatWriteRam32(r3, r5);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10164));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    MemoryInline::FlatWriteRam8((r3 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f0.d);
}

loc_8073B408:
{
    MemoryInline::FlatWrite32((r31 + 8), r3);
    r3 = 20;
    ctx->lr = 0x8073B414u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073B418:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073B444;
    }
}

loc_8073B41C:
{
    r5 = 0x808D0000u;
    r4 = 0x808A0000u;
    r5 = (r5 + -20172);
    MemoryInline::FlatWriteRam32(r3, r5);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10164));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    MemoryInline::FlatWriteRam8((r3 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f0.d);
}

loc_8073B444:
{
    MemoryInline::FlatWrite32((r31 + 12), r3);
    r3 = 20;
    ctx->lr = 0x8073B450u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073B454:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073B480;
    }
}

loc_8073B458:
{
    r5 = 0x808D0000u;
    r4 = 0x808A0000u;
    r5 = (r5 + -20172);
    MemoryInline::FlatWriteRam32(r3, r5);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10164));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    MemoryInline::FlatWriteRam8((r3 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRamFloat32((r3 + 16), f0.d);
}

loc_8073B480:
{
    MemoryInline::FlatWrite32((r31 + 16), r3);
}

loc_8073B484:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8073B0F8 func_8073B0F8 preserves=true fpr_mask=0x00000000
