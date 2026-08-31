#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806A2F20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806A2F20;

loc_806A2F20:
{
}

loc_806A2F24:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(-1))) {
        goto loc_806A2FBC;
    }
}

loc_806A2F28:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 13), 0, 2772u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 13));
}

loc_806A2F30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806A2F78;
    }
}

loc_806A2F34:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1965u, (r3 + 1978));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A2F3C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A2F50;
    }
}

loc_806A2F40:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 119u, (r3 + 132));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2771u, (r3 + 2784));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806A2F4C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806A2F64;
    }
}

loc_806A2F50:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 1543u, (r3 + 1556));
    r8 = r9;
    r7 = (r3 + 1780);
    r9 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x806975D4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_806A2F64:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 1543u, (r3 + 1556));
    r8 = r9;
    r7 = (r3 + 1780);
    r9 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x80697788u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_806A2F78:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1965u, (r3 + 1978));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A2F80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A2F94;
    }
}

loc_806A2F84:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 119u, (r3 + 132));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2771u, (r3 + 2784));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806A2F90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806A2FA8;
    }
}

loc_806A2F94:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 1543u, (r3 + 1556));
    r8 = r9;
    r7 = (r3 + 2072);
    r9 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x806975D4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_806A2FA8:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 1543u, (r3 + 1556));
    r8 = r9;
    r7 = (r3 + 2072);
    r9 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x80697788u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_806A2FBC:
{
}

loc_806A2FC0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_806A3078;
    }
}

loc_806A2FC4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 13), 0, 2772u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r3 + 13));
}

loc_806A2FCC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806A3024;
    }
}

loc_806A2FD0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1965u, (r3 + 1978));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A2FD8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A2FEC;
    }
}

loc_806A2FDC:
{
    r4 = MemoryInline::ReadResolved32(guest_range_1, 119u, (r3 + 132));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2771u, (r3 + 2784));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806A2FE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806A3008;
    }
}

loc_806A2FEC:
{
    r4 = MemoryInline::ReadResolved32(guest_range_1, 1543u, (r3 + 1556));
    r5 = r7;
    r6 = r8;
    r8 = r9;
    r7 = (r3 + 1780);
    r9 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x806975D4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_806A3008:
{
    r4 = MemoryInline::ReadResolved32(guest_range_1, 1543u, (r3 + 1556));
    r5 = r7;
    r6 = r8;
    r8 = r9;
    r7 = (r3 + 1780);
    r9 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x80697788u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_806A3024:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1965u, (r3 + 1978));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A302C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A3040;
    }
}

loc_806A3030:
{
    r4 = MemoryInline::ReadResolved32(guest_range_1, 119u, (r3 + 132));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2771u, (r3 + 2784));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806A303C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806A305C;
    }
}

loc_806A3040:
{
    r4 = MemoryInline::ReadResolved32(guest_range_1, 1543u, (r3 + 1556));
    r5 = r7;
    r6 = r8;
    r8 = r9;
    r7 = (r3 + 2072);
    r9 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x806975D4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_806A305C:
{
    r4 = MemoryInline::ReadResolved32(guest_range_1, 1543u, (r3 + 1556));
    r5 = r7;
    r6 = r8;
    r8 = r9;
    r7 = (r3 + 2072);
    r9 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x80697788u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_806A3078:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806A307C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_806A3080:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 13), 0, 2772u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r3 + 13));
}

loc_806A3088:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806A30E0;
    }
}

loc_806A308C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1965u, (r3 + 1978));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A3094:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A30A8;
    }
}

loc_806A3098:
{
    r4 = MemoryInline::ReadResolved32(guest_range_2, 119u, (r3 + 132));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2771u, (r3 + 2784));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806A30A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806A30C4;
    }
}

loc_806A30A8:
{
    r4 = MemoryInline::ReadResolved32(guest_range_2, 1543u, (r3 + 1556));
    r8 = r9;
    r7 = (r3 + 1780);
    r5 = 5;
    r6 = 7;
    r9 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x806975D4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_806A30C4:
{
    r4 = MemoryInline::ReadResolved32(guest_range_2, 1543u, (r3 + 1556));
    r8 = r9;
    r7 = (r3 + 1780);
    r5 = 5;
    r6 = 7;
    r9 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x80697788u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_806A30E0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1965u, (r3 + 1978));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806A30E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806A30FC;
    }
}

loc_806A30EC:
{
    r4 = MemoryInline::ReadResolved32(guest_range_2, 119u, (r3 + 132));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2771u, (r3 + 2784));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_806A30F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806A3118;
    }
}

loc_806A30FC:
{
    r4 = MemoryInline::ReadResolved32(guest_range_2, 1543u, (r3 + 1556));
    r8 = r9;
    r7 = (r3 + 2072);
    r5 = 5;
    r6 = 7;
    r9 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x806975D4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_806A3118:
{
    r4 = MemoryInline::ReadResolved32(guest_range_2, 1543u, (r3 + 1556));
    r8 = r9;
    r7 = (r3 + 2072);
    r5 = 5;
    r6 = 7;
    r9 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x80697788u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806A2F20 func_806A2F20 preserves=true fpr_mask=0x00000000
