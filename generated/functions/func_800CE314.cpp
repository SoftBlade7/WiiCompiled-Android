#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CE314(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800CE314;

loc_800CE314:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r13 + -26928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800CE334:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CE3B0;
    }
}

loc_800CE338:
{
    // inline leaf 0x800D0CDC (10 guest instruction(s))
}

loc_inl0_0x800D0CDC:
{
    r3 = MemoryInline::FlatRead32((r13 + -26904));
}

loc_inl0_0x800D0CE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x800D0CFC;
    }
}

loc_inl0_0x800D0CE8:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_0x800D0CF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_inl0_0x800D0CFC;
    }
}

loc_inl0_0x800D0CF4:
{
    r3 = 1;
    goto loc_inl0_cont_800D0CDC;
}

loc_inl0_0x800D0CFC:
{
    r3 = 0;
}

loc_inl0_cont_800D0CDC:
{
    // end of inlined leaf 0x800D0CDC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800CE340:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CE3B0;
    }
}

loc_800CE344:
{
    // inline leaf 0x800D0274 (7 guest instruction(s))
}

loc_inl1_0x800D0274:
{
    r3 = MemoryInline::FlatRead32((r13 + -26904));
}

loc_inl1_0x800D027C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x800D0288;
    }
}

loc_inl1_0x800D0280:
{
    r3 = MemoryInline::FlatRead32((r3 + 28));
    goto loc_inl1_cont_800D0274;
}

loc_inl1_0x800D0288:
{
    r3 = 0;
}

loc_inl1_cont_800D0274:
{
    // end of inlined leaf 0x800D0274
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800CE34C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CE3B0;
    }
}

loc_800CE350:
{
    // inline leaf 0x800D0274 (7 guest instruction(s))
}

loc_inl2_0x800D0274:
{
    r3 = MemoryInline::FlatRead32((r13 + -26904));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl2_0x800D027C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_0x800D0288;
    }
}

loc_inl2_0x800D0280:
{
    r3 = MemoryInline::FlatRead32((r3 + 28));
    goto loc_inl2_cont_800D0274;
}

loc_inl2_0x800D0288:
{
    r3 = 0;
}

loc_inl2_cont_800D0274:
{
    // end of inlined leaf 0x800D0274
    r4 = r30;
    ctx->lr = 0x800CE35Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800EC498u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800CE360:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CE3B0;
    }
}

loc_800CE368:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_800CE36C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CE3B0;
    }
}

loc_800CE370:
{
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    r4 = r31;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->lr = 0x800CE380u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800FC2A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800CE384:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CE3B0;
    }
}

loc_800CE388:
{
    r3 = MemoryInline::FlatRead32((r13 + -26928));
    r4 = r31;
    r3 = MemoryInline::FlatRead32((r3 + 4));
    ctx->lr = 0x800CE398u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800FC364u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x80270000u;
    r3 = 4;
    r4 = (r4 + 23208);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800CE3ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800CE3C4;
}

loc_800CE3B0:
{
    r4 = 0x80270000u;
    r3 = 4;
    r4 = (r4 + 23252);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800CE3C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800CE3C4:
{
    r3 = r30;
    r4 = 0;
    r5 = 12;
    ctx->lr = 0x800CE3D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800CE314 func_800CE314 preserves=true fpr_mask=0x00000000
