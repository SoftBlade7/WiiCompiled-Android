#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8072C984(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8072C984;

loc_8072C984:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r27 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r5 = MemoryInline::FlatRead32((r5 + 11240));
    r3 = MemoryInline::FlatRead32(r4);
    r30 = MemoryInline::FlatRead32((r5 + 148));
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r29 = (r3 & 255);
    r3 = r30;
    r4 = r29;
    // inline leaf 0x80727CF8 (18 guest instruction(s))
}

loc_inl1_0x80727CF8:
{
    r0 = (r4 & 255);
    r4 = 0x809C0000u;
    r0 = (r0 * 240);
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r5 = 0;
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 244));
}

loc_inl1_0x80727D18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x80727D28;
    }
}

loc_inl1_0x80727D1C:
{
    r3 = MemoryInline::FlatRead32((r3 + 196));
    r5 = MemoryInline::FlatRead32((r3 + 24));
    goto loc_inl1_0x80727D38;
}

loc_inl1_0x80727D28:
{
}

loc_inl1_0x80727D2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl1_0x80727D38;
    }
}

loc_inl1_0x80727D30:
{
    r3 = MemoryInline::FlatRead32((r3 + 192));
    r5 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl1_0x80727D38:
{
    r3 = r5;
}

loc_inl1_cont_80727CF8:
{
    // end of inlined leaf 0x80727CF8
    r31 = r3;
    r28 = 0;
    goto loc_8072C9E8;
}

loc_8072C9CC:
{
    r3 = r30;
    r4 = r29;
    r5 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80727D50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    MemoryInline::FlatWrite32((r27 + 12), r3);
    r27 = (r27 + 4);
    r28 = (r28 + 1);
}

loc_8072C9E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r31));
}

loc_8072C9EC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8072C9CC;
    }
}

loc_8072C9F0:
{
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800004B gpr_write=0xF800007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8072C984 func_8072C984 preserves=true fpr_mask=0x00000000
