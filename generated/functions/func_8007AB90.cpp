#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007AB90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8007AB90;

loc_8007AB90:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = (r3 + -1885405184);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(28209));
}

loc_8007ABA4:
{
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007ABE0;
    }
}

loc_8007ABAC:
{
    r0 = (r3 + -1885929472);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(25393));
}

loc_8007ABB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007AC10;
    }
}

loc_8007ABB8:
{
    r0 = (r3 + -1954021376);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(29745));
}

loc_8007ABC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007AC64;
    }
}

loc_8007ABC4:
{
    r0 = (r3 + -2003697664);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(25649));
}

loc_8007ABCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007ACB8;
    }
}

loc_8007ABD0:
{
    r0 = (r3 + -1651376128);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(25649));
}

loc_8007ABD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007AD0C;
    }
}

loc_8007ABDC:
{
    goto loc_8007AD60;
}

loc_8007ABE0:
{
    r3 = MemoryInline::FlatRead32((r13 + -27280));
    r31 = r4;
    r4 = 216;
    ctx->lr = 0x8007ABF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80199B98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8007ABF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007AC08;
    }
}

loc_8007ABF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007AD64;
    }
}

loc_8007ABFC:
{
    r4 = r31;
    ctx->lr = 0x8007AC04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80078980u>(ctx);
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
    goto loc_8007AD64;
}

loc_8007AC08:
{
    r3 = 0;
    goto loc_8007AD64;
}

loc_8007AC10:
{
    r3 = MemoryInline::FlatRead32(r5);
    r31 = r4;
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r4 = 240;
    r6 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWriteRam32((r1 + 56), r3);
    r3 = MemoryInline::FlatRead32((r13 + -27280));
    MemoryInline::FlatWriteRam32((r1 + 60), r7);
    MemoryInline::FlatWriteRam32((r1 + 64), r6);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    ctx->lr = 0x8007AC40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80199B98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8007AC44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007AC5C;
    }
}

loc_8007AC48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007AD64;
    }
}

loc_8007AC4C:
{
    r4 = r31;
    r5 = (r1 + 56);
    ctx->lr = 0x8007AC58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8007AD90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8007AD64;
}

loc_8007AC5C:
{
    r3 = 0;
    goto loc_8007AD64;
}

loc_8007AC64:
{
    r3 = MemoryInline::FlatRead32(r5);
    r31 = r4;
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r4 = 260;
    r6 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWriteRam32((r1 + 40), r3);
    r3 = MemoryInline::FlatRead32((r13 + -27280));
    MemoryInline::FlatWriteRam32((r1 + 44), r7);
    MemoryInline::FlatWriteRam32((r1 + 48), r6);
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    ctx->lr = 0x8007AC94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80199B98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8007AC98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007ACB0;
    }
}

loc_8007AC9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007AD64;
    }
}

loc_8007ACA0:
{
    r4 = r31;
    r5 = (r1 + 40);
    ctx->lr = 0x8007ACACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8007B320u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8007AD64;
}

loc_8007ACB0:
{
    r3 = 0;
    goto loc_8007AD64;
}

loc_8007ACB8:
{
    r3 = MemoryInline::FlatRead32(r5);
    r31 = r4;
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r4 = 264;
    r6 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = MemoryInline::FlatRead32((r13 + -27280));
    MemoryInline::FlatWriteRam32((r1 + 28), r7);
    MemoryInline::FlatWriteRam32((r1 + 32), r6);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    ctx->lr = 0x8007ACE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80199B98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8007ACEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007AD04;
    }
}

loc_8007ACF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007AD64;
    }
}

loc_8007ACF4:
{
    r4 = r31;
    r5 = (r1 + 24);
    ctx->lr = 0x8007AD00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8007CC30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8007AD64;
}

loc_8007AD04:
{
    r3 = 0;
    goto loc_8007AD64;
}

loc_8007AD0C:
{
    r3 = MemoryInline::FlatRead32(r5);
    r31 = r4;
    r7 = MemoryInline::FlatRead32((r5 + 4));
    r4 = 216;
    r6 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = MemoryInline::FlatRead32((r13 + -27280));
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    MemoryInline::FlatWriteRam32((r1 + 16), r6);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x8007AD3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80199B98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8007AD40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007AD58;
    }
}

loc_8007AD44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007AD64;
    }
}

loc_8007AD48:
{
    r4 = r31;
    r5 = (r1 + 8);
    ctx->lr = 0x8007AD54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8007F240u>(ctx);
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
    goto loc_8007AD64;
}

loc_8007AD58:
{
    r3 = 0;
    goto loc_8007AD64;
}

loc_8007AD60:
{
    r3 = 0;
}

loc_8007AD64:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8007AB90 func_8007AB90 preserves=true fpr_mask=0x00000000
