#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806598C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r8_rot_0 = 0;
    uint32_t r9_addic_src_0 = 0;
    uint32_t r9_addic_src_1 = 0;
    uint32_t r9_addic_src_2 = 0;
    uint32_t r9_addic_src_3 = 0;
    uint32_t r9_addic_src_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806598C4;

loc_806598C4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 16;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    r4 = 0;
    ctx->lr = 0x806598F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r8 = (r8_rot_0 & 1020);
    r0 = 2;
    r5 = (r1 + 8);
    r9 = 0;
    r7 = (r31 + r8);
    r6 = 0;
    r4 = 16;
    ctr = r0;
}

loc_80659910:
{
}

loc_80659914:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80659920;
    }
}

loc_80659918:
{
    MemoryInline::FlatWrite8((r5 + 8), static_cast<uint8_t>(r4));
    goto loc_80659940;
}

loc_80659920:
{
    r0 = MemoryInline::FlatRead32((r7 + 10092));
    r0 = (r0 ^ 1);
    r0 = (r0 * 48);
    r3 = (r7 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 240));
    r3_addr_2 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite8((r5 + 8), static_cast<uint8_t>(r0));
}

loc_80659940:
{
    r9_addic_src_2 = r9;
    r9 = (r9_addic_src_2 + 1);
}

loc_80659944:
{
    r6 = (r6 + 4);
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80659954;
    }
}

loc_8065994C:
{
    MemoryInline::FlatWrite8((r5 + 9), static_cast<uint8_t>(r4));
    goto loc_80659974;
}

loc_80659954:
{
    r0 = MemoryInline::FlatRead32((r7 + 10092));
    r0 = (r0 ^ 1);
    r0 = (r0 * 48);
    r3 = (r7 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 240));
    r3_addr_4 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite8((r5 + 9), static_cast<uint8_t>(r0));
}

loc_80659974:
{
    r9_addic_src_3 = r9;
    r9 = (r9_addic_src_3 + 1);
}

loc_80659978:
{
    r6 = (r6 + 4);
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80659988;
    }
}

loc_80659980:
{
    MemoryInline::FlatWrite8((r5 + 10), static_cast<uint8_t>(r4));
    goto loc_806599A8;
}

loc_80659988:
{
    r0 = MemoryInline::FlatRead32((r7 + 10092));
    r0 = (r0 ^ 1);
    r0 = (r0 * 48);
    r3 = (r7 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 240));
    r3_addr_6 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_6);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite8((r5 + 10), static_cast<uint8_t>(r0));
}

loc_806599A8:
{
    r9_addic_src_4 = r9;
    r9 = (r9_addic_src_4 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r9_addic_src_4)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_806599AC:
{
    r6 = (r6 + 4);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806599BC;
    }
}

loc_806599B4:
{
    MemoryInline::FlatWrite8((r5 + 11), static_cast<uint8_t>(r4));
    goto loc_806599DC;
}

loc_806599BC:
{
    r0 = MemoryInline::FlatRead32((r7 + 10092));
    r0 = (r0 ^ 1);
    r0 = (r0 * 48);
    r3 = (r7 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 240));
    r3_addr_8 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite8((r5 + 11), static_cast<uint8_t>(r0));
}

loc_806599DC:
{
    r5 = (r5 + 4);
    r6 = (r6 + 4);
    r9 = (r9 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80659910;
    }
}

loc_806599EC:
{
    r3 = (r31 + r8);
    r4 = (r1 + 8);
    r0 = MemoryInline::FlatRead32((r3 + 10092));
    r5 = 16;
    r0 = (r0 ^ 1);
    r0 = (r0 * 48);
    r0 = (r31 + r0);
    r3 = (r0 + r8);
    r3 = MemoryInline::FlatRead32((r3 + 240));
    r31 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r31);
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
    r0 = 16;
    MemoryInline::FlatWrite32((r31 + 8), r0);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00003FB gpr_write=0xC00003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x806598C4 func_806598C4 preserves=true fpr_mask=0x00000000
