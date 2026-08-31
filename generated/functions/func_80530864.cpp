#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8052DD20_statefree(uint32_t, uint32_t);
extern "C" void func_8052E42C_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_8052E434_statefree(uint32_t, uint32_t);
extern "C" void func_8052E444_statefree(uint32_t, uint32_t);
extern "C" void func_8052E44C_statefree(uint32_t, uint32_t);
extern "C" void func_8052E658_statefree(uint32_t, uint32_t);
extern "C" void func_8052E660_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_80530F20_statefree(uint32_t);
extern "C" uint64_t func_80530F28_statefree(uint32_t);
extern "C" uint64_t func_80531068_statefree(uint32_t);

extern "C" void func_80530864(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80530864;

loc_80530864:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r25);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    r31 = r3;
    ctx->lr = 0x8053087Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805302C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r31 + 6144);
    r4 = (r31 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x805305ACu>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
    r30 = 0;
}

loc_8053088C:
{
    r3 = (r31 + 3088);
    r4 = (r30 & 255);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = 5;
    // inline leaf 0x8052E44C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 16), r4);
    // end of inlined leaf 0x8052E44C
    r4 = (r30 & 255);
    r3 = (r31 + 3088);
    r29 = (r4 + 1);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = (r29 & 255);
    // inline leaf 0x8052E658 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 225), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8052E658
    r3 = (r31 + 3088);
    r4 = (r30 & 255);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = (r29 & 255);
    // inline leaf 0x8052E660 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 224), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8052E660
    r30 = (r30 + 1);
}

loc_805308D4:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(12))) {
        goto loc_8053088C;
    }
}

loc_805308D8:
{
    r3 = (r31 + 3088);
    // inline leaf 0x8052ED18 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2900));
    // end of inlined leaf 0x8052ED18
    r0 = (r3 + -7);
    r3 = (r31 + 3088);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r29 = (r29_rot_0 & 134217727);
    // inline leaf 0x8052ED18 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2900));
    // end of inlined leaf 0x8052ED18
    r0 = (r3 + -12);
    r3 = (r31 + 3088);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r30 = (r30_rot_0 & 134217727);
    // inline leaf 0x80530F0C (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 2928));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80530F0C
}

loc_8053090C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80530A2C;
    }
}

loc_80530910:
{
    r30 = 1;
}

loc_80530914:
{
    r29 = (r30 & 255);
    r28 = 0;
}

loc_8053091C:
{
    r3 = (r31 + 32);
    r4 = (r28 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x80530F18 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 224));
    // end of inlined leaf 0x80530F18
    r0 = (r3 & 255);
}

loc_80530934:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r0))) {
        goto loc_80530A10;
    }
}

loc_80530938:
{
    r3 = (r31 + 32);
    r4 = (r28 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x8052ED20 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x8052ED20
}

loc_8053094C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(5))) {
        goto loc_80530A10;
    }
}

loc_80530950:
{
    r0 = (r30 + -1);
    r3 = (r31 + 32);
    r27 = (r0 & 255);
    r4 = (r28 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x80530F20 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    // end of inlined leaf 0x80530F20
    r29 = r3;
    r4 = r27;
    r3 = (r31 + 3088);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = r29;
    // inline leaf 0x8052E42C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 12), r4);
    // end of inlined leaf 0x8052E42C
    r3 = (r31 + 32);
    r4 = (r28 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x80530F28 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x80530F28
    r29 = r3;
    r4 = r27;
    r3 = (r31 + 3088);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = r29;
    // inline leaf 0x8052E444 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 8), r4);
    // end of inlined leaf 0x8052E444
    r4 = r27;
    r3 = (r31 + 3088);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = 1;
    // inline leaf 0x8052E44C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 16), r4);
    // end of inlined leaf 0x8052E44C
    r4 = r27;
    r3 = (r31 + 3088);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = (r30 & 255);
    // inline leaf 0x8052E658 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 225), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8052E658
    r4 = r27;
    r3 = (r31 + 3088);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = (r30 & 255);
    // inline leaf 0x8052E660 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 224), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8052E660
    r3 = (r31 + 32);
    r4 = (r28 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x80531068 (2 guest instruction(s))
    r3 = (r3 + 20);
    // end of inlined leaf 0x80531068
    r29 = r3;
    r4 = r27;
    r3 = (r31 + 3088);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80530F30u>(ctx);
    r0 = ctx->gpr[0];
    goto loc_80530A1C;
}

loc_80530A10:
{
    r28 = (r28 + 1);
}

loc_80530A18:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(12))) {
        goto loc_8053091C;
    }
}

loc_80530A1C:
{
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
}

loc_80530A24:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80530914;
    }
}

loc_80530A28:
{
    goto loc_80530EF0;
}

loc_80530A2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80530A30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80530D18;
    }
}

loc_80530A34:
{
    r3 = (r31 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052DCA8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r27 = r3;
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r28 = (r28_rot_1 & 134217727);
    r29 = 0;
    goto loc_80530A8C;
}

loc_80530A50:
{
    r3 = (r31 + 32);
    r4 = (r29 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x8052ED20 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x8052ED20
}

loc_80530A64:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80530A88;
    }
}

loc_80530A68:
{
    r3 = (r31 + 32);
    r4 = (r29 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x8052DD18 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 204));
    // end of inlined leaf 0x8052DD18
}

loc_80530A7C:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(r3))) {
        goto loc_80530A88;
    }
}

loc_80530A80:
{
    r28 = r27;
    goto loc_80530AA0;
}

loc_80530A88:
{
    r29 = (r29 + 1);
}

loc_80530A8C:
{
    // inline leaf 0x8052DD30 (4 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x8052DD30
    r3 = (r3 & 255);
    r0 = (r29 & 255);
}

loc_80530A9C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_80530A50;
    }
}

loc_80530AA0:
{
    r27 = 0;
    r26 = 1;
}

loc_80530AA8:
{
    r30 = (r26 & 255);
    r25 = 0;
}

loc_80530AB0:
{
    r3 = (r31 + 32);
    r4 = (r25 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x80530F18 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 224));
    // end of inlined leaf 0x80530F18
    r0 = (r3 & 255);
}

loc_80530AC8:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_80530BB8;
    }
}

loc_80530ACC:
{
    r3 = (r31 + 32);
    r4 = (r25 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x8052ED20 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x8052ED20
}

loc_80530AE0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80530BB8;
    }
}

loc_80530AE4:
{
    r3 = (r31 + 32);
    r4 = (r25 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x8052DD18 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 204));
    // end of inlined leaf 0x8052DD18
}

loc_80530AF8:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(r3))) {
        goto loc_80530BB8;
    }
}

loc_80530AFC:
{
    r3 = (r31 + 32);
    r4 = (r25 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x80530F20 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    // end of inlined leaf 0x80530F20
    r29 = r3;
    r3 = (r31 + 3088);
    r4 = (r27 & 255);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = r29;
    // inline leaf 0x8052E42C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 12), r4);
    // end of inlined leaf 0x8052E42C
    r3 = (r31 + 32);
    r4 = (r25 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x80530F28 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x80530F28
    r29 = r3;
    r3 = (r31 + 3088);
    r4 = (r27 & 255);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = r29;
    // inline leaf 0x8052E444 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 8), r4);
    // end of inlined leaf 0x8052E444
    r3 = (r31 + 3088);
    r4 = (r27 & 255);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = 1;
    // inline leaf 0x8052E44C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 16), r4);
    // end of inlined leaf 0x8052E44C
    r4 = (r27 & 255);
    r3 = (r31 + 3088);
    r29 = (r4 + 1);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = (r29 & 255);
    // inline leaf 0x8052E658 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 225), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8052E658
    r3 = (r31 + 3088);
    r4 = (r27 & 255);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = (r29 & 255);
    // inline leaf 0x8052E660 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 224), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8052E660
    r3 = (r31 + 32);
    r4 = (r25 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x80531068 (2 guest instruction(s))
    r3 = (r3 + 20);
    // end of inlined leaf 0x80531068
    r29 = r3;
    r3 = (r31 + 3088);
    r4 = (r27 & 255);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80530F30u>(ctx);
    r0 = ctx->gpr[0];
    r27 = (r27 + 1);
}

loc_80530BB8:
{
    r25 = (r25 + 1);
}

loc_80530BC0:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(12))) {
        goto loc_80530AB0;
    }
}

loc_80530BC4:
{
    r26 = (r26 + 1);
}

loc_80530BCC:
{
    if ((static_cast<uint32_t>(r26) <= static_cast<uint32_t>(12))) {
        goto loc_80530AA8;
    }
}

loc_80530BD0:
{
    r25 = 1;
}

loc_80530BD4:
{
    r30 = (r25 & 255);
    r26 = 0;
}

loc_80530BDC:
{
    r3 = (r31 + 32);
    r4 = (r26 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x80530F18 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 224));
    // end of inlined leaf 0x80530F18
    r0 = (r3 & 255);
}

loc_80530BF4:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_80530CFC;
    }
}

loc_80530BF8:
{
    r3 = (r31 + 32);
    r4 = (r26 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x8052ED20 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x8052ED20
}

loc_80530C0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(5))) {
        goto loc_80530CFC;
    }
}

loc_80530C10:
{
    r3 = (r31 + 32);
    r4 = (r26 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x8052ED20 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x8052ED20
}

loc_80530C24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80530CFC;
    }
}

loc_80530C28:
{
    r3 = (r31 + 32);
    r4 = (r26 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x8052DD18 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 204));
    // end of inlined leaf 0x8052DD18
}

loc_80530C3C:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(r3))) {
        goto loc_80530CFC;
    }
}

loc_80530C40:
{
    r3 = (r31 + 32);
    r4 = (r26 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x80530F20 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    // end of inlined leaf 0x80530F20
    r29 = r3;
    r3 = (r31 + 3088);
    r4 = (r27 & 255);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = r29;
    // inline leaf 0x8052E42C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 12), r4);
    // end of inlined leaf 0x8052E42C
    r3 = (r31 + 32);
    r4 = (r26 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x80530F28 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x80530F28
    r29 = r3;
    r3 = (r31 + 3088);
    r4 = (r27 & 255);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = r29;
    // inline leaf 0x8052E444 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 8), r4);
    // end of inlined leaf 0x8052E444
    r3 = (r31 + 3088);
    r4 = (r27 & 255);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = 1;
    // inline leaf 0x8052E44C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 16), r4);
    // end of inlined leaf 0x8052E44C
    r4 = (r27 & 255);
    r3 = (r31 + 3088);
    r29 = (r4 + 1);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = (r29 & 255);
    // inline leaf 0x8052E658 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 225), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8052E658
    r3 = (r31 + 3088);
    r4 = (r27 & 255);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = (r29 & 255);
    // inline leaf 0x8052E660 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 224), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8052E660
    r3 = (r31 + 32);
    r4 = (r26 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x80531068 (2 guest instruction(s))
    r3 = (r3 + 20);
    // end of inlined leaf 0x80531068
    r29 = r3;
    r3 = (r31 + 3088);
    r4 = (r27 & 255);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80530F30u>(ctx);
    r0 = ctx->gpr[0];
    r27 = (r27 + 1);
}

loc_80530CFC:
{
    r26 = (r26 + 1);
}

loc_80530D04:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(12))) {
        goto loc_80530BDC;
    }
}

loc_80530D08:
{
    r25 = (r25 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r25), static_cast<uint32_t>(12));
}

loc_80530D10:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80530BD4;
    }
}

loc_80530D14:
{
    goto loc_80530EF0;
}

loc_80530D18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80530D1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80530E3C;
    }
}

loc_80530D20:
{
    r25 = 0;
    r26 = 1;
}

loc_80530D28:
{
    r29 = (r26 & 255);
    r27 = 0;
}

loc_80530D30:
{
    r3 = (r31 + 32);
    r4 = (r27 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x80530F18 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 224));
    // end of inlined leaf 0x80530F18
    r0 = (r3 & 255);
}

loc_80530D48:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r0))) {
        goto loc_80530E20;
    }
}

loc_80530D4C:
{
    r3 = (r31 + 32);
    r4 = (r27 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x8052ED20 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x8052ED20
}

loc_80530D60:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80530E20;
    }
}

loc_80530D64:
{
    r3 = (r31 + 32);
    r4 = (r27 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x80530F20 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    // end of inlined leaf 0x80530F20
    r30 = r3;
    r3 = (r31 + 3088);
    r4 = (r25 & 255);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = r30;
    // inline leaf 0x8052E42C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 12), r4);
    // end of inlined leaf 0x8052E42C
    r3 = (r31 + 32);
    r4 = (r27 & 255);
    // inline leaf 0x8052DD20 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052DD20
    // inline leaf 0x80530F28 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x80530F28
    r30 = r3;
    r3 = (r31 + 3088);
    r4 = (r25 & 255);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = r30;
    // inline leaf 0x8052E444 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 8), r4);
    // end of inlined leaf 0x8052E444
    r3 = (r31 + 3088);
    r4 = (r25 & 255);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = 1;
    // inline leaf 0x8052E44C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 16), r4);
    // end of inlined leaf 0x8052E44C
    r4 = (r25 & 255);
    r3 = (r31 + 3088);
    r30 = (r4 + 1);
    // inline leaf 0x8052E434 (4 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    // end of inlined leaf 0x8052E434
    r4 = (r30 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8052E658u) && KnownTranslatedCpuCall<0x8052E658u>::kAvailable && !KnownTranslatedCpuCall<0x8052E658u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8052E658u>()) {
        func_8052E658_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052E658u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    r3 = (r31 + 3088);
    r4 = (r25 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8052E434u) && KnownTranslatedCpuCall<0x8052E434u>::kAvailable && !KnownTranslatedCpuCall<0x8052E434u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8052E434u>()) {
        const auto state_free_result_8052E434_72C1 = func_8052E434_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_8052E434_72C1);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052E434u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    r4 = (r30 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8052E660u) && KnownTranslatedCpuCall<0x8052E660u>::kAvailable && !KnownTranslatedCpuCall<0x8052E660u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8052E660u>()) {
        func_8052E660_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052E660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    r3 = (r31 + 32);
    r4 = (r27 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8052DD20u) && KnownTranslatedCpuCall<0x8052DD20u>::kAvailable && !KnownTranslatedCpuCall<0x8052DD20u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8052DD20u>()) {
        const auto state_free_result_8052DD20_7BA8 = func_8052DD20_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_8052DD20_7BA8);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052DD20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80531068u) && KnownTranslatedCpuCall<0x80531068u>::kAvailable && !KnownTranslatedCpuCall<0x80531068u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80531068u>()) {
        const auto state_free_result_80531068_8033 = func_80531068_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_80531068_8033);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80531068u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    r30 = r3;
    r3 = (r31 + 3088);
    r4 = (r25 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8052E434u) && KnownTranslatedCpuCall<0x8052E434u>::kAvailable && !KnownTranslatedCpuCall<0x8052E434u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8052E434u>()) {
        const auto state_free_result_8052E434_84F8 = func_8052E434_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_8052E434_84F8);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052E434u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    r4 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80530F30u>(ctx);
    r0 = ctx->gpr[0];
    r25 = (r25 + 1);
}

loc_80530E20:
{
    r27 = (r27 + 1);
}

loc_80530E28:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(12))) {
        goto loc_80530D30;
    }
}

loc_80530E2C:
{
    r26 = (r26 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(12));
}

loc_80530E34:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80530D28;
    }
}

loc_80530E38:
{
    goto loc_80530EF0;
}

loc_80530E3C:
{
    r3 = (r31 + 32);
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8052DD20u) && KnownTranslatedCpuCall<0x8052DD20u>::kAvailable && !KnownTranslatedCpuCall<0x8052DD20u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8052DD20u>()) {
        const auto state_free_result_8052DD20_8C3C = func_8052DD20_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_8052DD20_8C3C);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052DD20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80530F20u) && KnownTranslatedCpuCall<0x80530F20u>::kAvailable && !KnownTranslatedCpuCall<0x80530F20u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80530F20u>()) {
        const auto state_free_result_80530F20_90C7 = func_80530F20_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_80530F20_90C7);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80530F20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    r30 = r3;
    r3 = (r31 + 3088);
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8052E434u) && KnownTranslatedCpuCall<0x8052E434u>::kAvailable && !KnownTranslatedCpuCall<0x8052E434u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8052E434u>()) {
        const auto state_free_result_8052E434_9582 = func_8052E434_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_8052E434_9582);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052E434u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8052E42Cu) && KnownTranslatedCpuCall<0x8052E42Cu>::kAvailable && !KnownTranslatedCpuCall<0x8052E42Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8052E42Cu>()) {
        func_8052E42C_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052E42Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    r3 = (r31 + 32);
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8052DD20u) && KnownTranslatedCpuCall<0x8052DD20u>::kAvailable && !KnownTranslatedCpuCall<0x8052DD20u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8052DD20u>()) {
        const auto state_free_result_8052DD20_9E57 = func_8052DD20_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_8052DD20_9E57);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052DD20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80530F28u) && KnownTranslatedCpuCall<0x80530F28u>::kAvailable && !KnownTranslatedCpuCall<0x80530F28u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80530F28u>()) {
        const auto state_free_result_80530F28_A2E2 = func_80530F28_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_80530F28_A2E2);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80530F28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    r30 = r3;
    r3 = (r31 + 3088);
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8052E434u) && KnownTranslatedCpuCall<0x8052E434u>::kAvailable && !KnownTranslatedCpuCall<0x8052E434u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8052E434u>()) {
        const auto state_free_result_8052E434_A79D = func_8052E434_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_8052E434_A79D);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052E434u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    r4 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8052E444u) && KnownTranslatedCpuCall<0x8052E444u>::kAvailable && !KnownTranslatedCpuCall<0x8052E444u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8052E444u>()) {
        func_8052E444_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052E444u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    r3 = (r31 + 3088);
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8052E434u) && KnownTranslatedCpuCall<0x8052E434u>::kAvailable && !KnownTranslatedCpuCall<0x8052E434u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8052E434u>()) {
        const auto state_free_result_8052E434_B074 = func_8052E434_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_8052E434_B074);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052E434u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    r4 = 1;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8052E44Cu) && KnownTranslatedCpuCall<0x8052E44Cu>::kAvailable && !KnownTranslatedCpuCall<0x8052E44Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8052E44Cu>()) {
        func_8052E44C_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052E44Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    r3 = (r31 + 3088);
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8052E434u) && KnownTranslatedCpuCall<0x8052E434u>::kAvailable && !KnownTranslatedCpuCall<0x8052E434u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8052E434u>()) {
        const auto state_free_result_8052E434_B949 = func_8052E434_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_8052E434_B949);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052E434u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    r4 = 1;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8052E658u) && KnownTranslatedCpuCall<0x8052E658u>::kAvailable && !KnownTranslatedCpuCall<0x8052E658u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8052E658u>()) {
        func_8052E658_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052E658u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    r3 = (r31 + 3088);
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8052E434u) && KnownTranslatedCpuCall<0x8052E434u>::kAvailable && !KnownTranslatedCpuCall<0x8052E434u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8052E434u>()) {
        const auto state_free_result_8052E434_C21E = func_8052E434_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_8052E434_C21E);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052E434u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    r4 = 1;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8052E660u) && KnownTranslatedCpuCall<0x8052E660u>::kAvailable && !KnownTranslatedCpuCall<0x8052E660u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8052E660u>()) {
        func_8052E660_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052E660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    r3 = (r31 + 32);
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8052DD20u) && KnownTranslatedCpuCall<0x8052DD20u>::kAvailable && !KnownTranslatedCpuCall<0x8052DD20u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8052DD20u>()) {
        const auto state_free_result_8052DD20_CAF1 = func_8052DD20_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_8052DD20_CAF1);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052DD20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80531068u) && KnownTranslatedCpuCall<0x80531068u>::kAvailable && !KnownTranslatedCpuCall<0x80531068u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80531068u>()) {
        const auto state_free_result_80531068_CF7C = func_80531068_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_80531068_CF7C);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80531068u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    r30 = r3;
    r3 = (r31 + 3088);
    r4 = 0;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8052E434u) && KnownTranslatedCpuCall<0x8052E434u>::kAvailable && !KnownTranslatedCpuCall<0x8052E434u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8052E434u>()) {
        const auto state_free_result_8052E434_D437 = func_8052E434_statefree(r3, r4);
        r3 = static_cast<uint32_t>(state_free_result_8052E434_D437);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8052E434u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
    r4 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80530F30u>(ctx);
    r0 = ctx->gpr[0];
}

loc_80530EF0:
{
    r3 = r31;
    ctx->lr = 0x80530EF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805302C4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 20));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 28));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 36));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 40));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 44));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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
// RECOMP_REGISTRATION base 0x80530864 func_80530864 preserves=true fpr_mask=0x00000000
