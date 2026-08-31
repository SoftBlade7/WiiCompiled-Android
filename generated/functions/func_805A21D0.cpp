#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A21D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r0_subfc_min_3 = 0;
    uint32_t r0_subfc_min_4 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_adde_right_3 = 0;
    uint32_t r3_adde_right_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805A21D0;

loc_805A21D0:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 8728);
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    MemoryInline::FlatWriteRam32((r1 + 68), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 64), r28);
    r0 = MemoryInline::FlatRead8((r3 + 834));
}

loc_805A2200:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A2228;
    }
}

loc_805A2204:
{
    r5 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 156));
    r5 = MemoryInline::FlatRead32((r5 + 6584));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r5 = MemoryInline::FlatRead32((r5 + 24));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    r0 = MemoryInline::FlatRead16((r5 + 820));
    MemoryInline::FlatWrite16((r3 + 820), static_cast<uint16_t>(r0));
}

loc_805A2228:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805A222C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A2AE8;
    }
}

loc_805A2230:
{
    r4 = MemoryInline::FlatRead8((r29 + 156));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80590100
    r30 = r3;
    // inline leaf 0x805903F4 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x805903F4
    r0 = MemoryInline::FlatRead16((r3 + 44));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A2254:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A22C4;
    }
}

loc_805A2258:
{
    r3 = 0x809C0000u;
    r4 = 2;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_1);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805A226C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A22C4;
    }
}

loc_805A2270:
{
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A2280:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A22C4;
    }
}

loc_805A2284:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 24576);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A228C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A22C4;
    }
}

loc_805A2290:
{
    r0 = MemoryInline::FlatRead16((r29 + 820));
    r4 = 0x809C0000u;
    r3 = r30;
    r0 = (r0 | 32);
    MemoryInline::FlatWrite16((r29 + 820), static_cast<uint16_t>(r0));
    r28 = MemoryInline::FlatRead32((r4 + 10424));
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r0 = r3;
    r3 = r28;
    r4 = (r0 & 255);
    r5 = 0;
    ctx->lr = 0x805A22C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8071E7ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_805A22F4;
}

loc_805A22C4:
{
    r0 = MemoryInline::FlatRead16((r29 + 820));
    r4 = 0x809C0000u;
    r3 = r30;
    r0 = (r0 & -33);
    MemoryInline::FlatWrite16((r29 + 820), static_cast<uint16_t>(r0));
    r28 = MemoryInline::FlatRead32((r4 + 10424));
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r0 = r3;
    r3 = r28;
    r4 = (r0 & 255);
    r5 = 1;
    ctx->lr = 0x805A22F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8071E7ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_805A22F4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 6584));
    r0 = MemoryInline::FlatRead8((r3 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A2304:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A231C;
    }
}

loc_805A2308:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(12));
}

loc_805A2318:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A2330;
    }
}

loc_805A231C:
{
    r3 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // end of inlined leaf 0x80590100
    r30 = r3;
}

loc_805A2330:
{
    r4 = MemoryInline::FlatRead32((r29 + 140));
    r3 = r30;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 260));
    MemoryInline::FlatWriteFloat32((r4 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 264));
    r4 = MemoryInline::FlatRead32((r29 + 140));
    MemoryInline::FlatWriteFloat32((r4 + 28), f0.d);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f1.d = MemoryInline::FlatReadFloat32((r3 + 556));
    r3 = r30;
    f2.d = MemoryInline::FlatReadFloat32((r29 + 252));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 280));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 252), f0.d);
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    MemoryInline::FlatWriteRam32((r1 + 40), r4);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = r30;
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 252));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    f0.d = MemoryInline::FlatReadFloat32((r3 + 128));
    r4 = 0x802A0000u;
    f8.d = MemoryInline::FlatReadFloat32((r29 + 300));
    r4 = (r4 + 16688);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 132));
    r5 = (r29 + 300);
    f6.d = MemoryInline::FlatReadFloat32((r29 + 304));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f8.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 136));
    r3 = (r29 + 312);
    f4.d = MemoryInline::FlatReadFloat32((r29 + 308));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 284));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    r6 = 1;
    f1.d = PpcFmulsInline(f7.d, f2.d);
    f0.d = PpcFmulsInline(f5.d, f2.d);
    f3.d = PpcFmulsInline(f3.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f3.d);
    MemoryInline::FlatWriteFloat32((r29 + 300), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 304), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 308), f0.d);
    ctx->lr = 0x805A2414u;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805AE9ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r7 = ctx->gpr[7];
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
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead16((r29 + 820));
    r3 = r29;
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A2420:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A242C;
    }
}

loc_805A2424:
{
    r4 = (r29 + 616);
    goto loc_805A2430;
}

loc_805A242C:
{
    r4 = (r29 + 412);
}

loc_805A2430:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 288));
    r5 = r30;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 292));
    r6 = (r1 + 40);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 296));
    ctx->lr = 0x805A2448u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805A2CFCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x805A2454u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805A3070u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead16((r29 + 820));
    r0 = (r0 & 1);
}

loc_805A245C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A2490;
    }
}

loc_805A2460:
{
    r3 = MemoryInline::FlatRead32((r29 + 404));
    r0 = (r3 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_805A2468:
{
    MemoryInline::FlatWrite32((r29 + 404), r0);
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_805A2490;
    }
}

loc_805A2470:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 400));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 300));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 304));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 400), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805A2488:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A2490;
    }
}

loc_805A248C:
{
    MemoryInline::FlatWriteFloat32((r29 + 400), f0.d);
}

loc_805A2490:
{
    r0 = MemoryInline::FlatRead16((r29 + 820));
    r0 = (r0 & 512);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A2498:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A24D8;
    }
}

loc_805A249C:
{
    r3 = MemoryInline::FlatRead16((r29 + 828));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r29 + 828), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_805A24C0;
    }
}

loc_805A24B0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r29 + 828), static_cast<uint16_t>(r0));
    r0 = 1;
    goto loc_805A24C4;
}

loc_805A24C0:
{
    r0 = 0;
}

loc_805A24C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A24C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A24D8;
    }
}

loc_805A24CC:
{
    r0 = MemoryInline::FlatRead16((r29 + 820));
    r0 = (r0 & -513);
    MemoryInline::FlatWrite16((r29 + 820), static_cast<uint16_t>(r0));
}

loc_805A24D8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 300));
    r3 = r29;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 288));
    r6 = r30;
    f3.d = MemoryInline::FlatReadFloat32((r31 + 240));
    r4 = (r29 + 412);
    r7 = (r1 + 40);
    r5 = 0;
    ctx->lr = 0x805A24FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805A34B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 300));
    r3 = r29;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 288));
    r6 = r30;
    f3.d = MemoryInline::FlatReadFloat32((r31 + 240));
    r4 = (r29 + 616);
    r7 = (r1 + 40);
    r5 = 1;
    ctx->lr = 0x805A2520u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805A34B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r29 + 820));
    r0 = (r3 & 8);
}

loc_805A2528:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A25BC;
    }
}

loc_805A252C:
{
    r0 = (r3 & 272);
}

loc_805A2530:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A258C;
    }
}

loc_805A2534:
{
    f3.d = MemoryInline::FlatReadFloat32((r29 + 292));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 312));
    f4.d = MemoryInline::FlatReadFloat32((r31 + 308));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r3 = MemoryInline::FlatRead32((r29 + 392));
    f5.d = MemoryInline::FlatReadFloat32((r29 + 296));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 164));
    f2.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 176));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32((r29 + 292), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f2.d = PpcFmulsInline(f4.d, f3.d);
    MemoryInline::FlatWriteFloat32((r29 + 164), f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    MemoryInline::FlatWriteFloat32((r29 + 296), f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 176), f0.d);
}

loc_805A258C:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 544));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 268));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A2598:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805A25A8;
    }
}

loc_805A259C:
{
    r0 = MemoryInline::FlatRead8((r29 + 452));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A25A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A25EC;
    }
}

loc_805A25A8:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 412));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 420));
    MemoryInline::FlatWriteFloat32((r29 + 160), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 168), f0.d);
    goto loc_805A25EC;
}

loc_805A25BC:
{
    r0 = MemoryInline::FlatRead8((r29 + 834));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 412));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 416));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A25CC:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 420));
    MemoryInline::FlatWriteFloat32((r29 + 160), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 164), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 168), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A25EC;
    }
}

loc_805A25E0:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32((r29 + 292), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 296), f0.d);
}

loc_805A25EC:
{
    r3 = r30;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r8 = MemoryInline::FlatRead32((r3 + 128));
    r5 = r30;
    r0 = MemoryInline::FlatRead32((r3 + 132));
    r4 = (r29 + 412);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r6 = (r1 + 28);
    r7 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r8);
    r0 = MemoryInline::FlatRead32((r3 + 136));
    r3 = r29;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r12 = MemoryInline::FlatRead32(r29);
    r12 = MemoryInline::FlatRead32((r12 + 80));
    ctr = r12;
    ctx->lr = 0x805A2630u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r29;
    r5 = r30;
    r4 = (r29 + 412);
    r6 = 0;
    ctx->lr = 0x805A2644u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805A4E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r29 + 834));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A264C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A26B0;
    }
}

loc_805A2650:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 28));
    r3 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r5 = r30;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f2.d = (-(f2.d));
    f1.d = (-(f1.d));
    r4 = (r29 + 616);
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f2.d);
    r6 = (r1 + 28);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f1.d);
    r7 = 1;
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    r12 = MemoryInline::FlatRead32(r29);
    r12 = MemoryInline::FlatRead32((r12 + 80));
    ctr = r12;
    ctx->lr = 0x805A2698u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r29;
    r5 = r30;
    r4 = (r29 + 616);
    r6 = 1;
    ctx->lr = 0x805A26ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805A4E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805A26DC;
}

loc_805A26B0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2920));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(31));
}

loc_805A26C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A26DC;
    }
}

loc_805A26C4:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 620));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 316));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A26D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A26DC;
    }
}

loc_805A26D4:
{
    MemoryInline::FlatWriteFloat32((r29 + 676), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 620), f0.d);
}

loc_805A26DC:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 84));
    ctr = r12;
    ctx->lr = 0x805A26F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead16((r29 + 820));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 160));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 164));
    r0 = (r0 & 32);
}

loc_805A2700:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 168));
    f5.d = MemoryInline::FlatReadFloat32((r29 + 172));
    f4.d = MemoryInline::FlatReadFloat32((r29 + 176));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 180));
    MemoryInline::FlatWriteFloat32((r29 + 100), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 104), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 108), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 112), f5.d);
    MemoryInline::FlatWriteFloat32((r29 + 116), f4.d);
    MemoryInline::FlatWriteFloat32((r29 + 120), f3.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A2794;
    }
}

loc_805A272C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 196), 0, 584u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r29 + 196));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r29 + 200));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r29 + 204));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 580u, (r29 + 776));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 116u, (r29 + 312));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 120u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 120u, (r29 + 316));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 124u, (r29 + 320));
        }
    }
    f2.d = PpcFmulsInline(f6.d, f2.d);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 420u, (r29 + 616));
    f1.d = PpcFmulsInline(f6.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 100), f7.d);
    f0.d = PpcFmulsInline(f6.d, f0.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 424u, (r29 + 620));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    MemoryInline::FlatWriteFloat32((r29 + 104), f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 428u, (r29 + 624));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 108), f3.d);
    MemoryInline::FlatWriteFloat32((r29 + 112), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 116), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 120), f0.d);
    goto loc_805A27C8;
}

loc_805A2794:
{
    f6.d = MemoryInline::FlatReadFloat32((r29 + 572));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 312));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 316));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 320));
    f2.d = PpcFmulsInline(f6.d, f2.d);
    f1.d = PpcFmulsInline(f6.d, f1.d);
    f0.d = PpcFmulsInline(f6.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 112), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 116), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 120), f0.d);
}

loc_805A27C8:
{
    r3 = MemoryInline::FlatRead32((r29 + 396));
    r0 = MemoryInline::FlatRead16((r29 + 820));
}

loc_805A27D4:
{
    r0 = (r0 & -5);
    MemoryInline::FlatWrite16((r29 + 820), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805A2978;
    }
}

loc_805A27E0:
{
    r0 = (r0 & 1024);
}

loc_805A27E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A2978;
    }
}

loc_805A27E8:
{
    r0 = MemoryInline::FlatRead8((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A27F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A2978;
    }
}

loc_805A27F4:
{
    r4 = MemoryInline::FlatRead32((r29 + 140));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 104));
    r4 = (r0 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80531FC8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_805A2810:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805A28D8;
    }
}

loc_805A2814:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 6584));
    r0 = MemoryInline::FlatRead8((r3 + 37));
}

loc_805A2824:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A28D8;
    }
}

loc_805A2828:
{
    r0 = MemoryInline::FlatRead8((r29 + 834));
}

loc_805A2830:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A28D8;
    }
}

loc_805A2834:
{
    r3 = r30;
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r28 = 0x809C0000u;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & 1020);
    r3 = MemoryInline::FlatRead32((r28 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
}

loc_805A2858:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A2880;
    }
}

loc_805A285C:
{
    r3 = r30;
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = MemoryInline::FlatRead32((r28 + -10448));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & 1020);
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 64);
}

loc_805A287C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A28D8;
    }
}

loc_805A2880:
{
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 17408);
}

loc_805A2890:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A28D8;
    }
}

loc_805A2894:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 6584));
    r0 = MemoryInline::FlatRead8((r3 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A28A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A28D8;
    }
}

loc_805A28A8:
{
    r28 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r28 + -10456));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80532030u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_805A28B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805A28D8;
    }
}

loc_805A28BC:
{
    r3 = MemoryInline::FlatRead32((r28 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2932));
}

loc_805A28C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_805A28D8;
    }
}

loc_805A28CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 2928));
}

loc_805A28D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_805A2978;
    }
}

loc_805A28D8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead8((r3 + 907));
}

loc_805A28EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A2960;
    }
}

loc_805A28F0:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + -10484));
    r3 = MemoryInline::FlatRead16((r4 + 96));
    r0 = MemoryInline::FlatRead16((r4 + 148));
    r3 = (r3 & 256);
    r0 = (r3 & ~r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A2960;
    }
}

loc_805A290C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
}

loc_805A291C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_805A2928;
    }
}

loc_805A2920:
{
}

loc_805A2924:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A2934;
    }
}

loc_805A2928:
{
    r0 = MemoryInline::FlatRead32((r3 + 2932));
}

loc_805A2930:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805A2954;
    }
}

loc_805A2934:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + 6584));
    r0 = MemoryInline::FlatRead8((r4 + 37));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A2944:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A2954;
    }
}

loc_805A2948:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80532030u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_805A2950:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805A2960;
    }
}

loc_805A2954:
{
    r0 = MemoryInline::FlatRead16((r29 + 832));
    r0 = ~(r0 | r0);
    MemoryInline::FlatWrite16((r29 + 832), static_cast<uint16_t>(r0));
}

loc_805A2960:
{
    r0 = MemoryInline::FlatRead16((r29 + 832));
}

loc_805A2968:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A2978;
    }
}

loc_805A296C:
{
    r0 = MemoryInline::FlatRead16((r29 + 820));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16((r29 + 820), static_cast<uint16_t>(r0));
}

loc_805A2978:
{
    r0 = MemoryInline::FlatRead16((r29 + 820));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A2980:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A29A4;
    }
}

loc_805A2984:
{
    r3 = MemoryInline::FlatRead32((r29 + 396));
    MemoryInline::FlatWrite32((r3 + 44), r30);
    r3 = MemoryInline::FlatRead32((r29 + 396));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x805A29A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805A2A30;
}

loc_805A29A4:
{
    r0 = MemoryInline::FlatRead8((r29 + 830));
}

loc_805A29AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A2A30;
    }
}

loc_805A29B0:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 288));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A29BC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A29C8;
    }
}

loc_805A29C0:
{
    f3.d = MemoryInline::FlatReadFloat32((r31 + 240));
    goto loc_805A29CC;
}

loc_805A29C8:
{
    f3.d = MemoryInline::FlatReadFloat32((r31 + 288));
}

loc_805A29CC:
{
    r3 = MemoryInline::FlatRead32((r29 + 392));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 288));
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 284));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    r28 = MemoryInline::FlatRead32((r29 + 140));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 284), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 16));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_805A29FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A2A30;
    }
}

loc_805A2A00:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 268));
    r3 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 272));
    r4 = (r1 + 12);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 16), f2.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800851E0u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 20), f0.d);
}

loc_805A2A30:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2920));
}

loc_805A2A40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(31))) {
        goto loc_805A2A58;
    }
}

loc_805A2A44:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 104));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 316));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A2A50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A2A58;
    }
}

loc_805A2A54:
{
    MemoryInline::FlatWriteFloat32((r29 + 104), f0.d);
}

loc_805A2A58:
{
    r3 = MemoryInline::FlatRead32((r29 + 408));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805A2A60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A2A70;
    }
}

loc_805A2A64:
{
    r0 = MemoryInline::FlatRead16((r29 + 820));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r4 = (r4_rot_1 & 1);
    ctx->lr = 0x805A2A70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805A7358u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805A2A70:
{
    r4 = MemoryInline::FlatRead32((r29 + 408));
    r5 = 1;
    r3 = 0;
}

loc_805A2A80:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805A2A94;
    }
}

loc_805A2A84:
{
    r0 = MemoryInline::FlatRead16((r4 + 108));
    r0 = (r0 & 2);
}

loc_805A2A8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A2A94;
    }
}

loc_805A2A90:
{
    r3 = 1;
}

loc_805A2A94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805A2A98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A2AAC;
    }
}

loc_805A2A9C:
{
    r0 = MemoryInline::FlatRead16((r29 + 820));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805A2AA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A2AAC;
    }
}

loc_805A2AA8:
{
    r5 = 0;
}

loc_805A2AAC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 240));
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x805A2ABCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805A40D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
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
    cr = ctx->cr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x805A2AD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r29 + 220), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteFloat32((r29 + 224), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r29 + 228), f0.d);
}

loc_805A2AE8:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    r28 = MemoryInline::FlatRead32((r1 + 64));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805A21D0 func_805A21D0 preserves=true fpr_mask=0x00000000
