#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80713E90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80713E90;

loc_80713E90:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80713E9C:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713EC8;
    }
}

loc_80713EAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80713EB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713F0C;
    }
}

loc_80713EB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_80713EB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713F70;
    }
}

loc_80713EBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4));
}

loc_80713EC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80713FB4;
    }
}

loc_80713EC4:
{
    goto loc_80714000;
}

loc_80713EC8:
{
    r3 = 24;
    ctx->lr = 0x80713ED0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80713ED4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714040;
    }
}

loc_80713ED8:
{
    r5 = 0x808D0000u;
    r4 = 0x808D0000u;
    r5 = (r5 + -28440);
    MemoryInline::FlatWriteRam32(r3, r5);
    r0 = 0;
    r4 = (r4 + -28488);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam8((r3 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 20), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r5 + 10320), r3);
    MemoryInline::FlatWriteRam32(r3, r4);
    goto loc_80714040;
}

loc_80713F0C:
{
    r3 = 28;
    ctx->lr = 0x80713F14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80713F18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714040;
    }
}

loc_80713F1C:
{
    r5 = 0x808D0000u;
    r4 = 0x808D0000u;
    r5 = (r5 + -28440);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 25u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r5);
    r6 = 0;
    r4 = (r4 + -28536);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r6);
    r5 = 0x809C0000u;
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r3 + 12), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 20), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam32((r5 + 10320), r3);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(68));
}

loc_80713F54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714040;
    }
}

loc_80713F58:
{
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r3 + 21), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r3 + 22), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r3 + 23), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r3 + 24), static_cast<uint8_t>(r6));
    ctx->lr = 0x80713F6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x807104D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80714040;
}

loc_80713F70:
{
    r3 = 24;
    ctx->lr = 0x80713F78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80713F7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714040;
    }
}

loc_80713F80:
{
    r5 = 0x808D0000u;
    r4 = 0x808D0000u;
    r5 = (r5 + -28440);
    MemoryInline::FlatWriteRam32(r3, r5);
    r0 = 0;
    r4 = (r4 + -28584);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam8((r3 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 20), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r5 + 10320), r3);
    MemoryInline::FlatWriteRam32(r3, r4);
    goto loc_80714040;
}

loc_80713FB4:
{
    r3 = 24;
    ctx->lr = 0x80713FBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80713FC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714040;
    }
}

loc_80713FC4:
{
    r5 = 0x808D0000u;
    r4 = 0x808D0000u;
    r5 = (r5 + -28440);
    MemoryInline::FlatWriteRam32(r3, r5);
    r6 = 0;
    r4 = (r4 + -28632);
    MemoryInline::FlatWriteRam32((r3 + 8), r6);
    r5 = 0x809C0000u;
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 12), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 20), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam32((r5 + 10320), r3);
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam8((r3 + 21), static_cast<uint8_t>(r0));
    goto loc_80714040;
}

loc_80714000:
{
    r3 = 24;
    ctx->lr = 0x80714008u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8071400C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80714040;
    }
}

loc_80714010:
{
    r5 = 0x808D0000u;
    r4 = 0x808D0000u;
    r5 = (r5 + -28440);
    MemoryInline::FlatWriteRam32(r3, r5);
    r0 = 0;
    r4 = (r4 + -28584);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam8((r3 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 20), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r5 + 10320), r3);
    MemoryInline::FlatWriteRam32(r3, r4);
}

loc_80714040:
{
    r4 = 0x809C0000u;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r4 + 10324), r31);
    r3 = MemoryInline::FlatRead32((r3 + 10392));
    // inline leaf 0x807178F8 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2213), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x807178F8
    r31 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r31 + 9000));
    ctx->lr = 0x80714060u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F9900u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 9000));
    r0 = MemoryInline::FlatRead8((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8071406C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807140A0;
    }
}

loc_80714070:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 9048));
    // inline leaf 0x806FE9BC (9 guest instruction(s))
    r4 = 0x808A0000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 5076));
    MemoryInline::FlatWriteFloat32((r3 + 80), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 108), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 136), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 164), f0.d);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806FE9BC
    r4 = MemoryInline::FlatRead32((r31 + 9000));
    r0 = 0;
    r3 = 0x809C0000u;
    MemoryInline::FlatWrite8((r4 + 36), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 9004));
    ctx->lr = 0x80714094u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F9E20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 9008));
    ctx->lr = 0x807140A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FA5ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807140A0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80713E90 func_80713E90 preserves=true fpr_mask=0x00000000
