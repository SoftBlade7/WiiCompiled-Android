#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80132520(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80132520;

loc_80132520:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x80330000u;
    r5 = 124;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    r3 = (r4 + 24216);
    r4 = 0;
    ctx->lr = 0x8013254Cu;
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
    r3 = 0x80330000u;
    r4 = 0;
    r3 = (r3 + 24600);
    r5 = 46;
    ctx->lr = 0x80132560u;
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
    r31 = 0x80250000u;
    r3 = (r1 + 8);
    r4 = (r31 + -14600);
    r5 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 8);
    ctx->lr = 0x8013257Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8013B100u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x80330000u;
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r4 = (r4 + 24340);
    r3 = 0x80250000u;
    MemoryInline::FlatWriteRam32((r4 + 80), r0);
    r3 = (r3 + -14296);
    ctx->lr = 0x80132598u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8013F0E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = (r31 + -14600);
    r3 = MemoryInline::FlatRead16((r31 + 8));
    // inline leaf 0x80138A80 (4 guest instruction(s))
    r4 = 0x80330000u;
    r4 = (r4 + 25208);
    MemoryInline::FlatWriteRam16((r4 + 1222), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x80138A80
    r3 = MemoryInline::FlatRead16((r31 + 6));
    ctx->lr = 0x801325ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8013B3F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r31 + 4));
    // inline leaf 0x801386B4 (4 guest instruction(s))
    r4 = 0x80330000u;
    r4 = (r4 + 25208);
    MemoryInline::FlatWriteRam16((r4 + 1220), static_cast<uint16_t>(r3));
    // end of inlined leaf 0x801386B4
    r3 = 0x80130000u;
    r3 = (r3 + 16224);
    // inline leaf 0x801390FC (17 guest instruction(s))
}

loc_inl2_0x801390FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl2_0x80139100:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_0x80139118;
    }
}

loc_inl2_0x80139104:
{
    r3 = 0x80330000u;
    r0 = 0;
    r3 = (r3 + 25208);
    MemoryInline::FlatWriteRam32((r3 + 1224), r0);
    goto loc_inl2_0x80139138;
}

loc_inl2_0x80139118:
{
    r4 = 0x80330000u;
    r4 = (r4 + 25208);
    r0 = MemoryInline::FlatRead32((r4 + 1224));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl2_0x80139128:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_0x80139134;
    }
}

loc_inl2_0x8013912C:
{
    r3 = 2;
    goto loc_inl2_cont_801390FC;
}

loc_inl2_0x80139134:
{
    MemoryInline::FlatWriteRam32((r4 + 1224), r3);
}

loc_inl2_0x80139138:
{
    r3 = 0;
}

loc_inl2_cont_801390FC:
{
    // end of inlined leaf 0x801390FC
    r3 = 0x80130000u;
    r3 = (r3 + 15880);
    ctx->lr = 0x801325CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8013B02Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x80130000u;
    r3 = (r3 + 18016);
    // inline leaf 0x80131E64 (4 guest instruction(s))
    r4 = 0x80330000u;
    r4 = (r4 + 24024);
    MemoryInline::FlatWriteRam32((r4 + 128), r3);
    // end of inlined leaf 0x80131E64
    r31 = 0x80130000u;
    r3 = (r31 + 17448);
    // inline leaf 0x80131E74 (4 guest instruction(s))
    r4 = 0x80330000u;
    r4 = (r4 + 24024);
    MemoryInline::FlatWriteRam32((r4 + 136), r3);
    // end of inlined leaf 0x80131E74
    ctx->lr = 0x801325E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80134E28u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x80330000u;
    r4 = 0;
    r3 = (r3 + 24168);
    r5 = 45;
    ctx->lr = 0x801325FCu;
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
    r3 = (r31 + 17448);
    // inline leaf 0x80131E74 (4 guest instruction(s))
    r4 = 0x80330000u;
    r4 = (r4 + 24024);
    MemoryInline::FlatWriteRam32((r4 + 136), r3);
    // end of inlined leaf 0x80131E74
    r3 = 0x80130000u;
    r4 = 0;
    r3 = (r3 + 17220);
    // inline leaf 0x8014AC28 (1 guest instruction(s))
    // end of inlined leaf 0x8014AC28
    ctx->lr = 0x80132618u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80143380u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFCE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80132520 func_80132520 preserves=true fpr_mask=0x00000000
