#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80707534(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80707534;

loc_80707534:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = (r3 + 148);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    ctx->lr = 0x80707554u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80702714u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 152));
    MemoryInline::FlatWrite32((r31 + 220), r3);
    // inline leaf 0x80590A7C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80590A7C
    MemoryInline::FlatWrite16((r31 + 156), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead32((r31 + 220));
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWrite8((r31 + 225), static_cast<uint8_t>(r0));
    // inline leaf 0x805902EC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead16((r3 + 14));
    // end of inlined leaf 0x805902EC
    MemoryInline::FlatWrite8((r31 + 226), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r31 + 220));
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r30 = 0x809C0000u;
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    r4 = (r0 & 255);
    // inline leaf 0x80531F18 (5 guest instruction(s))
    r0 = (r4 * 240);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 45));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F18
    MemoryInline::FlatWrite8((r31 + 179), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r31 + 220));
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r31 + 179));
    r3 = (r3 * 240);
    r4 = MemoryInline::FlatRead32((r30 + -10456));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r3 = (r4 + r3);
    r0 = MemoryInline::FlatRead32((r3 + 244));
    MemoryInline::FlatWrite32((r31 + 228), r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807075F8;
    }
}

loc_807075D0:
{
    r3 = MemoryInline::FlatRead32((r31 + 220));
    // inline leaf 0x80590650 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80590650
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807075DC:
{
    MemoryInline::FlatWrite8((r31 + 224), static_cast<uint8_t>(r3));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707600;
    }
}

loc_807075E4:
{
    r3 = 0x809C0000u;
    r4 = r31;
    r3 = MemoryInline::FlatRead32((r3 + 10232));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80713754u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80707600;
}

loc_807075F8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 224), static_cast<uint8_t>(r0));
}

loc_80707600:
{
    r0 = MemoryInline::FlatRead8((r31 + 224));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80707608:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80707618;
    }
}

loc_8070760C:
{
    r0 = MemoryInline::FlatRead32((r31 + 96));
    r0 = (r0 | 768);
    MemoryInline::FlatWrite32((r31 + 96), r0);
}

loc_80707618:
{
    r3 = MemoryInline::FlatRead32((r31 + 184));
    r4 = r31;
    ctx->lr = 0x80707624u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FAE60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 204), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 206), static_cast<uint16_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80707534 func_80707534 preserves=true fpr_mask=0x00000000
