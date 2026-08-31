#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011B9D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8011B9D8;

loc_8011B9D8:
{
    MemoryInline::FlatWriteRam32((r1 + -304), r1);
    r1 = (r1 + -304);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 308), r0);
    MemoryInline::FlatWriteRam32((r1 + 300), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 296), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 292), r29);
    r29 = r5;
    r0 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8011BA04:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8011BD34;
    }
}

loc_8011BA08:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r3 = (r1 + 20);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x8011BA18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801ED938u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r29 + 2));
    // inline leaf 0x801ED990 (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED990
    r0 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite32((r31 + 48), r0);
    r3 = MemoryInline::FlatRead16((r29 + 2));
    // inline leaf 0x801ED990 (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED990
    r0 = 1;
    MemoryInline::FlatWrite16((r31 + 52), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r31 + 54), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 18));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011BA44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011BB30;
    }
}

loc_8011BA48:
{
    r3 = (r1 + 200);
    r4 = (r13 + -30000);
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 3;
    r0 = 7;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 204u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 190u, (r1 + 206), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 191u, (r1 + 207), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 8));
    // inline leaf 0x801ED998 (1 guest instruction(s))
    // end of inlined leaf 0x801ED998
    MemoryInline::WriteResolved32(guest_range_0, 192u, (r1 + 208), r3);
    r0 = MemoryInline::FlatRead32((r31 + 48));
    MemoryInline::WriteResolved32(guest_range_0, 196u, (r1 + 212), r0);
    r3 = MemoryInline::FlatRead16((r31 + 52));
    // inline leaf 0x801ED99C (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED99C
    MemoryInline::WriteResolved16(guest_range_0, 200u, (r1 + 216), static_cast<uint16_t>(r3));
    r3 = (r1 + 16);
    r0 = MemoryInline::FlatRead8((r31 + 54));
    MemoryInline::WriteResolved8(guest_range_0, 202u, (r1 + 218), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r31 + 16));
    r4 = (2 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(2) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r0 = (r5 + -2);
    r0 = (r4 | r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    MemoryInline::WriteResolved8(guest_range_0, 203u, (r1 + 219), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 48));
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 16), r0);
    ctx->lr = 0x8011BAB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801ED938u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = MemoryInline::FlatRead32((r31 + 4));
    r3 = MemoryInline::FlatRead16((r31 + 52));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(-1));
}

loc_8011BAC4:
{
    r30 = MemoryInline::FlatRead32((r31 + 48));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011BAD0;
    }
}

loc_8011BACC:
{
    goto loc_8011BAD4;
}

loc_8011BAD0:
{
    r29 = MemoryInline::FlatRead32(r31);
}

loc_8011BAD4:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r1 + 41), static_cast<uint8_t>(r0));
    // inline leaf 0x801ED99C (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED99C
    MemoryInline::FlatWriteRam16((r1 + 42), static_cast<uint16_t>(r3));
    r3 = r29;
    r4 = (r1 + 200);
    r7 = (r1 + 40);
    MemoryInline::FlatWriteRam32((r1 + 44), r30);
    r5 = 20;
    r6 = 0;
    r8 = 8;
    ctx->lr = 0x8011BB04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F13D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->lr = 0x8011BB08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F24C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r31 + 54));
    r4 = (r3 + 700);
    r3 = 7;
    MemoryInline::FlatWrite32((r31 + 44), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011BB1C:
{
    MemoryInline::FlatWrite32((r31 + 40), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011BD34;
    }
}

loc_8011BB24:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 55), static_cast<uint8_t>(r0));
    goto loc_8011BD34;
}

loc_8011BB30:
{
    r0 = MemoryInline::FlatRead32((r31 + 16));
}

loc_8011BB38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8011BC44;
    }
}

loc_8011BB3C:
{
    r0 = MemoryInline::FlatRead8((r31 + 55));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011BB44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011BC2C;
    }
}

loc_8011BB48:
{
    r3 = (r1 + 124);
    r4 = (r13 + -30000);
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 3;
    r0 = 7;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 132u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 118u, (r1 + 130), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 119u, (r1 + 131), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 8));
    // inline leaf 0x801ED998 (1 guest instruction(s))
    // end of inlined leaf 0x801ED998
    MemoryInline::WriteResolved32(guest_range_1, 120u, (r1 + 132), r3);
    r0 = MemoryInline::FlatRead32((r31 + 48));
    MemoryInline::WriteResolved32(guest_range_1, 124u, (r1 + 136), r0);
    r3 = MemoryInline::FlatRead16((r31 + 52));
    // inline leaf 0x801ED99C (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED99C
    MemoryInline::WriteResolved16(guest_range_1, 128u, (r1 + 140), static_cast<uint16_t>(r3));
    r3 = (r1 + 12);
    r0 = MemoryInline::FlatRead8((r31 + 54));
    MemoryInline::WriteResolved8(guest_range_1, 130u, (r1 + 142), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r31 + 16));
    r4 = (2 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(2) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r0 = (r5 + -2);
    r0 = (r4 | r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    MemoryInline::WriteResolved8(guest_range_1, 131u, (r1 + 143), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 48));
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 12), r0);
    ctx->lr = 0x8011BBB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801ED938u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = MemoryInline::FlatRead32((r31 + 4));
    r3 = MemoryInline::FlatRead16((r31 + 52));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(-1));
}

loc_8011BBC4:
{
    r30 = MemoryInline::FlatRead32((r31 + 48));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011BBD0;
    }
}

loc_8011BBCC:
{
    goto loc_8011BBD4;
}

loc_8011BBD0:
{
    r29 = MemoryInline::FlatRead32(r31);
}

loc_8011BBD4:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r1 + 33), static_cast<uint8_t>(r0));
    // inline leaf 0x801ED99C (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED99C
    MemoryInline::FlatWriteRam16((r1 + 34), static_cast<uint16_t>(r3));
    r3 = r29;
    r4 = (r1 + 124);
    r7 = (r1 + 32);
    MemoryInline::FlatWriteRam32((r1 + 36), r30);
    r5 = 20;
    r6 = 0;
    r8 = 8;
    ctx->lr = 0x8011BC04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F13D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->lr = 0x8011BC08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F24C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r31 + 54));
    r4 = (r3 + 700);
    r3 = 7;
    MemoryInline::FlatWrite32((r31 + 44), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011BC1C:
{
    MemoryInline::FlatWrite32((r31 + 40), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011BC2C;
    }
}

loc_8011BC24:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 55), static_cast<uint8_t>(r0));
}

loc_8011BC2C:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    ctx->lr = 0x8011BC38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F24C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 + 5000);
    MemoryInline::FlatWrite32((r31 + 44), r0);
    goto loc_8011BD34;
}

loc_8011BC44:
{
    r0 = MemoryInline::FlatRead8((r30 + 19));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011BC4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011BD34;
    }
}

loc_8011BC50:
{
    r3 = (r1 + 48);
    r4 = (r13 + -30000);
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 3;
    r0 = 7;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 60u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 46u, (r1 + 54), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_2, 47u, (r1 + 55), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 8));
    // inline leaf 0x801ED998 (1 guest instruction(s))
    // end of inlined leaf 0x801ED998
    MemoryInline::WriteResolved32(guest_range_2, 48u, (r1 + 56), r3);
    r0 = MemoryInline::FlatRead32((r31 + 48));
    MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 60), r0);
    r3 = MemoryInline::FlatRead16((r31 + 52));
    // inline leaf 0x801ED99C (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED99C
    MemoryInline::WriteResolved16(guest_range_2, 56u, (r1 + 64), static_cast<uint16_t>(r3));
    r3 = (r1 + 8);
    r0 = MemoryInline::FlatRead8((r31 + 54));
    MemoryInline::WriteResolved8(guest_range_2, 58u, (r1 + 66), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r31 + 16));
    r4 = (2 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(2) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r0 = (r5 + -2);
    r0 = (r4 | r0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    MemoryInline::WriteResolved8(guest_range_2, 59u, (r1 + 67), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 48));
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 8), r0);
    ctx->lr = 0x8011BCC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801ED938u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = MemoryInline::FlatRead32((r31 + 4));
    r3 = MemoryInline::FlatRead16((r31 + 52));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(-1));
}

loc_8011BCCC:
{
    r30 = MemoryInline::FlatRead32((r31 + 48));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011BCD8;
    }
}

loc_8011BCD4:
{
    goto loc_8011BCDC;
}

loc_8011BCD8:
{
    r29 = MemoryInline::FlatRead32(r31);
}

loc_8011BCDC:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r0));
    // inline leaf 0x801ED99C (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED99C
    MemoryInline::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r3));
    r3 = r29;
    r4 = (r1 + 48);
    r7 = (r1 + 24);
    MemoryInline::FlatWriteRam32((r1 + 28), r30);
    r5 = 20;
    r6 = 0;
    r8 = 8;
    ctx->lr = 0x8011BD0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F13D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->lr = 0x8011BD10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F24C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r31 + 54));
    r4 = (r3 + 700);
    r3 = 7;
    MemoryInline::FlatWrite32((r31 + 44), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011BD24:
{
    MemoryInline::FlatWrite32((r31 + 40), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011BD34;
    }
}

loc_8011BD2C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 55), static_cast<uint8_t>(r0));
}

loc_8011BD34:
{
    r0 = MemoryInline::FlatRead32((r1 + 308));
    r31 = MemoryInline::FlatRead32((r1 + 300));
    r30 = MemoryInline::FlatRead32((r1 + 296));
    r29 = MemoryInline::FlatRead32((r1 + 292));
    ctx->lr = r0;
    r1 = (r1 + 304);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFF7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8011B9D8 func_8011B9D8 preserves=true fpr_mask=0x00000000
