#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80541878(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80541878;

loc_80541878:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80541884:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r26);
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805418A4;
    }
}

loc_805418A0:
{
    // inline leaf 0x8051BED0 (12 guest instruction(s))
}

loc_inl0_0x8051BED0:
{
    r4 = 0x80380000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 24520));
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x8051BEEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8051BEF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_inl0_0x8051BEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8051BEF8:
{
    r3 = r4;
    goto loc_inl0_cont_8051BED0;
}

loc_inl0_return:
{
}

loc_inl0_cont_8051BED0:
{
    // end of inlined leaf 0x8051BED0
}

loc_805418A4:
{
    r31 = 0;
    goto loc_80541950;
}

loc_805418AC:
{
    r0 = MemoryInline::FlatRead16((r30 + 8));
    r3 = (r31 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_805418B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805418CC;
    }
}

loc_805418BC:
{
    r0 = (r3 * 164);
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r26 = (r3 + r0);
    goto loc_805418D0;
}

loc_805418CC:
{
    r26 = 0;
}

loc_805418D0:
{
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052A800u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
}

loc_805418E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805418EC;
    }
}

loc_805418E4:
{
    r0 = 0;
    goto loc_80541938;
}

loc_805418EC:
{
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r0 = (r31 & 65535);
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead16((r4 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_80541900:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80541934;
    }
}

loc_80541904:
{
    r3 = r26;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80541920;
    }
}

loc_8054190C:
{
    r0 = (r0 * 36);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 8));
    goto loc_80541924;
}

loc_80541920:
{
    r4 = 0;
}

loc_80541924:
{
    r5 = r29;
    ctx->lr = 0x8054192Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80084000u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 1;
    goto loc_80541938;
}

loc_80541934:
{
    r0 = 0;
}

loc_80541938:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8054193C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8054194C;
    }
}

loc_80541940:
{
    r3 = r28;
    r4 = r26;
    ctx->lr = 0x8054194Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80084170u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
}

loc_8054194C:
{
    r31 = (r31 + 1);
}

loc_80541950:
{
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8052A800u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
}

loc_80541960:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80541974;
    }
}

loc_80541964:
{
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead16((r3 + 8));
    goto loc_80541978;
}

loc_80541974:
{
    r3 = 0;
}

loc_80541978:
{
    r0 = (r31 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_80541980:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805418AC;
    }
}

loc_80541984:
{
    r26 = MemoryInline::FlatRead32((r1 + 8));
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
// RECOMP_REGISTRATION base 0x80541878 func_80541878 preserves=true fpr_mask=0x00000000
