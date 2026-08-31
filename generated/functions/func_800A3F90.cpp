#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A3F90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800A3F90;

loc_800A3F90:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    r7 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_800A3FAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A3FDC;
    }
}

loc_800A3FB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A3FBC;
    }
}

loc_800A3FB4:
{
    r0 = MemoryInline::FlatRead32((r7 + 144));
    goto loc_800A3FC0;
}

loc_800A3FBC:
{
    r0 = -1;
}

loc_800A3FC0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_800A3FC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A3FDC;
    }
}

loc_800A3FC8:
{
    r3 = r7;
    r4 = 1;
    // inline leaf 0x8008E780 (6 guest instruction(s))
    r0 = (0 - r4);
    MemoryInline::FlatWrite32((r3 + 132), r4);
    r0 = (r0 & ~r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWrite8((r3 + 122), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8008E780
    r3 = 0;
    goto loc_800A4024;
}

loc_800A3FDC:
{
    r12 = MemoryInline::FlatRead32(r3);
    r7 = r6;
    r4 = r31;
    r6 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x800A3FF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
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
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800A3FFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A4004;
    }
}

loc_800A4000:
{
    goto loc_800A4024;
}

loc_800A4004:
{
    r3 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800A400C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A4014;
    }
}

loc_800A4010:
{
    // inline leaf 0x8008E310 (6 guest instruction(s))
}

loc_inl1_0x8008E310:
{
    r0 = MemoryInline::FlatRead8((r3 + 121));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x8008E318:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8008E31C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 120), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_8008E310;
}

loc_inl1_return:
{
}

loc_inl1_cont_8008E310:
{
    // end of inlined leaf 0x8008E310
}

loc_800A4014:
{
    r3 = MemoryInline::FlatRead32(r31);
    r4 = 1;
    // inline leaf 0x8008E780 (6 guest instruction(s))
    r0 = (0 - r4);
    MemoryInline::FlatWrite32((r3 + 132), r4);
    r0 = (r0 & ~r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    MemoryInline::FlatWrite8((r3 + 122), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8008E780
    r3 = 0;
}

loc_800A4024:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800A3F90 func_800A3F90 preserves=true fpr_mask=0x00000000
