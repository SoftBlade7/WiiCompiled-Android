#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056EA04(CpuContext* MKW_RESTRICT ctx)
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
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8056EA04;

loc_8056EA04:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r0 = MemoryInline::FlatRead32(r4);
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r0 = (r0 & 512);
}

loc_8056EA2C:
{
    r30 = r7;
    r31 = r8;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056EA5C;
    }
}

loc_8056EA38:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 16));
    r4 = MemoryInline::FlatRead16((r3 + 88));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 84));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 88), static_cast<uint16_t>(r0));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 84), f0.d);
}

loc_8056EA5C:
{
    r3 = 552075264;
    r0 = MemoryInline::FlatRead32(r7);
    r4 = (r3 + 4095);
    r0 = (r0 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056EA7C;
    }
}

loc_8056EA70:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD96Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    goto loc_8056EA80;
}

loc_8056EA7C:
{
    r3 = 0;
}

loc_8056EA80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8056EA84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056EE0C;
    }
}

loc_8056EA88:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 15324));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r0 & 8192);
}

loc_8056EA98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056EAB8;
    }
}

loc_8056EA9C:
{
    r0 = MemoryInline::FlatRead32(r28);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32(r28, r0);
    r0 = MemoryInline::FlatRead32((r27 + 44));
    r0 = (r0 | 2048);
    MemoryInline::FlatWrite32((r27 + 44), r0);
    goto loc_8056EAC4;
}

loc_8056EAB8:
{
    r0 = MemoryInline::FlatRead32((r27 + 44));
    r0 = (r0 | 4096);
    MemoryInline::FlatWrite32((r27 + 44), r0);
}

loc_8056EAC4:
{
    r5 = 0x809C0000u;
    r3 = (r27 + 4);
    r4 = MemoryInline::FlatRead32((r5 + 15324));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_1 & 3);
    MemoryInline::FlatWrite32((r28 + 124), r0);
    r4 = MemoryInline::FlatRead32((r5 + 15324));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r26 = (r0 & 31);
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 100));
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 112));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8056EB00:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8056EB08;
    }
}

loc_8056EB04:
{
    MemoryInline::FlatWriteFloat32((r28 + 100), f1.d);
}

loc_8056EB08:
{
    r26 = 0x809C0000u;
    r3 = (r27 + 4);
    r4 = MemoryInline::FlatRead32((r26 + 15324));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r25 = (r0 & 31);
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 104));
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 240));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 104), f0.d);
    r3 = MemoryInline::FlatRead32((r26 + 15324));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r0 & 16384);
}

loc_8056EB44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056EB64;
    }
}

loc_8056EB48:
{
    r3 = (r27 + 4);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 | 134217728);
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_8056EB64:
{
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r4 + 15324));
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r28 + 108), r0);
    r3 = MemoryInline::FlatRead32((r4 + 15324));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 7);
    MemoryInline::FlatWrite32((r28 + 112), r0);
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 28);
}

loc_8056EB8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056EB9C;
    }
}

loc_8056EB90:
{
    r0 = MemoryInline::FlatRead32((r27 + 44));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r27 + 44), r0);
}

loc_8056EB9C:
{
}

loc_8056EBA0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8056EBD0;
    }
}

loc_8056EBA4:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 64);
}

loc_8056EBAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056EBD0;
    }
}

loc_8056EBB0:
{
    r3 = (r27 + 4);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r0 = MemoryInline::FlatRead32((r3 + 592));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 592), r0);
    r0 = MemoryInline::FlatRead32((r27 + 44));
    r0 = (r0 | 256);
    MemoryInline::FlatWrite32((r27 + 44), r0);
}

loc_8056EBD0:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056EBD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056EBEC;
    }
}

loc_8056EBDC:
{
    r3 = r30;
    r4 = 128;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD96Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    goto loc_8056EBF0;
}

loc_8056EBEC:
{
    r3 = 0;
}

loc_8056EBF0:
{
}

loc_8056EBF4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8056EC38;
    }
}

loc_8056EBF8:
{
    r3 = (r27 + 4);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r0 = MemoryInline::FlatRead32((r3 + 592));
    r4 = 0x809C0000u;
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r3 + 592), r0);
    r4 = MemoryInline::FlatRead32((r4 + 15324));
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_5 & 7);
    MemoryInline::FlatWrite32((r3 + 116), r0);
    r0 = MemoryInline::FlatRead32((r27 + 44));
    r0 = (r0 | 2320);
    MemoryInline::FlatWrite32((r27 + 44), r0);
    goto loc_8056EC54;
}

loc_8056EC38:
{
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r0 = -1;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 116), r0);
    r0 = MemoryInline::FlatRead32((r27 + 44));
    r0 = (r0 | 4096);
    MemoryInline::FlatWrite32((r27 + 44), r0);
}

loc_8056EC54:
{
    r0 = MemoryInline::FlatRead32(r28);
    r0 = (r0 & 512);
}

loc_8056EC5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8056EC84;
    }
}

loc_8056EC60:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 16));
    r3 = MemoryInline::FlatRead16((r27 + 96));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 92));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r27 + 96), static_cast<uint16_t>(r0));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r27 + 92), f0.d);
}

loc_8056EC84:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 4194304);
}

loc_8056EC8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056ECAC;
    }
}

loc_8056EC90:
{
    r3 = (r27 + 4);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 | 65536);
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_8056ECAC:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 524288);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056ECB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056ECC8;
    }
}

loc_8056ECB8:
{
    r3 = r30;
    r4 = 524288;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD96Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    goto loc_8056ECCC;
}

loc_8056ECC8:
{
    r3 = 0;
}

loc_8056ECCC:
{
}

loc_8056ECD0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8056ED68;
    }
}

loc_8056ECD4:
{
    r3 = (r27 + 4);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 | 512);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 8);
}

loc_8056ED00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8056ED20;
    }
}

loc_8056ED04:
{
    r3 = (r27 + 4);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_8056ED20:
{
    r5 = MemoryInline::FlatRead32((r27 + 44));
    r0 = 2;
    r4 = MemoryInline::FlatRead32((r27 + 4));
    r3 = 0x809C0000u;
    r5 = (r5 | 512);
    MemoryInline::FlatWrite32((r27 + 44), r5);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite16((r4 + 134), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 15324));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_7 & 7);
}

loc_8056ED50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8056ED68;
    }
}

loc_8056ED54:
{
    r3 = (r27 + 4);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r0 = MemoryInline::FlatRead32((r3 + 592));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r3 + 592), r0);
}

loc_8056ED68:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056ED70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056ED84;
    }
}

loc_8056ED74:
{
    r3 = r30;
    r4 = 256;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD96Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    goto loc_8056ED88;
}

loc_8056ED84:
{
    r3 = 0;
}

loc_8056ED88:
{
}

loc_8056ED8C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8056EDF4;
    }
}

loc_8056ED90:
{
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r4 & 262144);
}

loc_8056EDA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056EDAC;
    }
}

loc_8056EDA4:
{
    r0 = (r4 & 1073741824);
}

loc_8056EDA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8056EDE8;
    }
}

loc_8056EDAC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 8388608);
}

loc_8056EDB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8056EDE8;
    }
}

loc_8056EDB8:
{
    r3 = (r27 + 4);
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
    r0 = MemoryInline::FlatRead32((r3 + 592));
    r4 = 0x809C0000u;
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r3 + 592), r0);
    r4 = MemoryInline::FlatRead32((r4 + 15324));
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_9 & 7);
    MemoryInline::FlatWrite32((r3 + 120), r0);
}

loc_8056EDE8:
{
    r0 = MemoryInline::FlatRead32(r28);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32(r28, r0);
}

loc_8056EDF4:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 2097152);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056EDFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056EE0C;
    }
}

loc_8056EE00:
{
    r0 = MemoryInline::FlatRead32((r27 + 44));
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite32((r27 + 44), r0);
}

loc_8056EE0C:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE0001FB gpr_write=0xFE0008FB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056EA04 func_8056EA04 preserves=true fpr_mask=0x00000000
